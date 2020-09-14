/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:27:49 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/23 19:21:37 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int board[10])
{
	int		i;
	char	cur_f;

	i = -1;
	while (++i < 10)
	{
		cur_f = board[i] + '0';
		write(1, &cur_f, 1);
	}
	write(1, "\n", 1);
}

int		ft_check_col(int board[10], int cur_line, int col_test)
{
	int i;

	i = -1;
	while (++i < cur_line)
		if (board[i] == col_test)
			return (0);
	return (1);
}

int		ft_check_diag(int board[10], int cur_line, int col_test)
{
	int i;
	int diag_left;
	int diag_right;

	i = -1;
	diag_left = col_test - cur_line;
	diag_right = col_test + cur_line;
	while (++i < cur_line)
	{
		if ((board[i] == diag_left + i) || (board[i] == diag_right - i))
			return (0);
	}
	return (1);
}

void	ft_backtrack(int board[1][10], int line, int *nb_sol)
{
	int col_test;

	col_test = 0;
	while (col_test < 10)
	{
		board[0][line] = col_test;
		if (ft_check_col(board[0], line, col_test)
				&& ft_check_diag(board[0], line, col_test))
		{
			if (line == 9)
			{
				print_board(board[0]);
				*nb_sol += 1;
			}
			else
				ft_backtrack(board, line + 1, nb_sol);
		}
		col_test++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int nb_sol;
	int board[10];
	int init;
	int first_col;

	first_col = -1;
	nb_sol = 0;
	init = -1;
	while (++init < 10)
		board[init] = -1;
	while (++first_col < 10)
	{
		board[0] = first_col;
		ft_backtrack(&board, 1, &nb_sol);
	}
	return (nb_sol);
}
