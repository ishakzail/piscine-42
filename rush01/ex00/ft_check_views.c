/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_views.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 13:16:13 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 20:19:02 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_check_views(t_game game)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (!ft_view_col_top(game, i))
			return (0);
		if (!ft_view_col_down(game, i))
			return (0);
		if (!ft_view_row_left(game, i))
			return (0);
		if (!ft_view_row_right(game, i))
			return (0);
	}
	return (1);
}

int	ft_view_col_top(t_game game, int col)
{
	int i;
	int last_visible_box;
	int nb_viewed;

	i = -1;
	last_visible_box = 0;
	nb_viewed = 0;
	while (++i < 4)
	{
		if (game.board[i][col] > last_visible_box)
		{
			last_visible_box = game.board[i][col];
			nb_viewed++;
		}
	}
	return (nb_viewed == game.col[TOP][col]);
}

int	ft_view_col_down(t_game game, int col)
{
	int i;
	int last_visible_box;
	int nb_viewed;

	i = 4;
	last_visible_box = 0;
	nb_viewed = 0;
	while (--i >= 0)
	{
		if (game.board[i][col] > last_visible_box)
		{
			last_visible_box = game.board[i][col];
			nb_viewed++;
		}
	}
	return (nb_viewed == game.col[DOWN][col]);
}

int	ft_view_row_left(t_game game, int line)
{
	int i;
	int last_visible_box;
	int nb_viewed;

	i = -1;
	last_visible_box = 0;
	nb_viewed = 0;
	while (++i < 4)
		if (game.board[line][i] > last_visible_box)
		{
			last_visible_box = game.board[line][i];
			nb_viewed++;
		}
	return (nb_viewed == game.row[LEFT][line]);
}

int	ft_view_row_right(t_game game, int line)
{
	int i;
	int last_visible_box;
	int nb_viewed;

	i = 4;
	last_visible_box = 0;
	nb_viewed = 0;
	while (--i >= 0)
	{
		if (game.board[line][i] > last_visible_box)
		{
			last_visible_box = game.board[line][i];
			nb_viewed++;
		}
	}
	return (nb_viewed == game.row[RIGHT][line]);
}
