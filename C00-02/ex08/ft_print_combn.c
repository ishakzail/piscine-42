/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:48:31 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/21 15:21:05 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int *array, int n)
{
	int		i;
	char	cur_f;

	i = -1;
	while (++i < n)
	{
		cur_f = array[i] + '0';
		write(1, &cur_f, 1);
	}
	write(1, ", ", 2);
}

void	init_array(int n, int array[1][n])
{
	int i;

	i = -1;
	while (++i < n)
		array[0][i] = i;
}

void	print_last(int n)
{
	int		i;
	char	cur_f;

	i = 10 - n - 1;
	while (++i < 10)
	{
		cur_f = i + '0';
		write(1, &cur_f, 1);
	}
}

void	reset_array(int size, int array[1][size], int index)
{
	if (array[0][index - 1] == array[0][index] - 1)
		reset_array(size, array, index - 1);
	else
		array[0][index - 1]++;
	array[0][index] = array[0][index - 1] + 1;
}

void	ft_print_combn(int n)
{
	int array[n];

	if (n > 0 && n < 10)
	{
		init_array(n, &array);
		while (array[0] < (10 - n))
		{
			if (array[n - 1] <= 9)
			{
				print_array(array, n);
				array[n - 1]++;
			}
			else
				reset_array(n, &array, n - 1);
		}
		print_last(n);
	}
}
