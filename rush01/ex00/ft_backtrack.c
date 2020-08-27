/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 13:13:12 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 14:17:14 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_backtrack(t_game *game, int x, int y, int *is_finish)
{
	int val_test;

	val_test = 1;
	while (val_test <= 4 && !(*is_finish))
	{
		game->board[x][y] = val_test;
		if (x == 3 && y == 3)
		{
			if (ft_check(*game))
			{
				ft_display_board(game->board);
				*is_finish = 1;
			}
		}
		else if (y == 3)
			ft_backtrack(game, x + 1, 0, is_finish);
		else
			ft_backtrack(game, x, y + 1, is_finish);
		val_test++;
	}
}

int		ft_check_error(int *a, int *b)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = i;
		while (++j < 3)
			if ((a[i] == a[j] && (a[i] == 1 || a[i] == 4))
					|| (b[i] == b[j] && (b[i] == 1 || b[i] == 4)))
				return (0);
		if (a[i] == b[i] && a[i] != 2)
			return (0);
		if ((a[i] == 4 && b[i] != 1) || (a[i] != 1 && b[i] == 4))
			return (0);
	}
	return (1);
}

void	ft_set_board(t_game *game)
{
	int is_finish;

	is_finish = 0;
	if (ft_check_error(game->col[TOP], game->col[DOWN])
			&& ft_check_error(game->row[LEFT], game->row[RIGHT]))
	{
		ft_backtrack(game, 0, 0, &is_finish);
	}
	if (!is_finish)
		write(1, "Error\n", 6);
}
