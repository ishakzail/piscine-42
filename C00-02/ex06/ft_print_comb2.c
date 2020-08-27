/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:35:27 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 15:38:43 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_simple_number(int n)
{
	int first_char;
	int second_char;

	first_char = n / 10;
	second_char = n % 10;
	ft_putchar('0' + first_char);
	ft_putchar('0' + second_char);
}

void	ft_print_comb2(void)
{
	int first_number;
	int second_number;

	first_number = 0;
	second_number = 1;
	while (first_number < 99)
	{
		while (second_number <= 99)
		{
			ft_put_simple_number(first_number);
			ft_putchar(' ');
			ft_put_simple_number(second_number);
			if (first_number != 98 || second_number != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_number++;
		}
		first_number++;
		second_number = first_number + 1;
	}
}
