/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:49:22 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/27 15:16:27 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int alpha_index(char c)
{
	if (is_upcase(c))
		return (c - 'A' + 1);
	else if (is_lowcase(c))
		return (c - 'a' + 1);
	else
		return (0);
}

void print_case(char c)
{
	int i;

	i = -1;
	while (++i < alpha_index(c))
		write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while (av[1][i])
		{
			if(is_upcase(av[1][i]) || is_lowcase(av[1][i]))
				print_case(av[1][i]);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
