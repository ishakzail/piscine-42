/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:13:10 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/27 15:21:34 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int search_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4 && search_char(av[1], av[2][0])
			&& !av[2][1] && !av[3][1])
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			i++;
		}
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
