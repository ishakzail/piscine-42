/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 13:12:20 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 13:37:12 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_check_argv(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
	}
	return ((i == 31) ? 1 : 0);
}

int		*ft_set_game(char *str, int index)
{
	int x;
	int *tab;
	int y;

	x = -1;
	y = -1;
	tab = malloc(sizeof(int) * 4);
	while (++x < 8)
		if (str[index + x] != ' ')
			tab[++y] = str[index + x] - '0';
	return (tab);
}

void	ft_init_board(t_game *game)
{
	int i;
	int j;

	i = -1;
	game->board = malloc(sizeof(int*) * 4);
	while (++i < 4)
		game->board[i] = malloc(sizeof(int) * 4);
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			game->board[i][j] = 0;
	}
}

void	ft_display_board(int **board)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int		main(int argc, char **argv)
{
	t_game game;

	if (argc == 2 && ft_check_argv(argv[1]))
	{
		game.col = malloc(sizeof(int*) * 2);
		game.row = malloc(sizeof(int*) * 2);
		game.col[TOP] = ft_set_game(argv[1], 0);
		game.col[DOWN] = ft_set_game(argv[1], 8);
		game.row[LEFT] = ft_set_game(argv[1], 16);
		game.row[RIGHT] = ft_set_game(argv[1], 24);
		ft_init_board(&game);
		ft_set_board(&game);
	}
	else
		write(1, "Error\n", 6);
	free(game.board);
	free(game.col);
	free(game.row);
	return (0);
}
