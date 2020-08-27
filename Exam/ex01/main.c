/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:31:41 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/27 14:38:29 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pgcd.c"
#include <stdio.h>

int ft_atoi(char *str)
{
	int r_value;
	int i;

	 r_value = 0;
	 i = 0;
	 while (str[i])
	 {
		 r_value = r_value * 10 + (str[i] - '0');
		 i++;
	 }
	 return (r_value);
}

int main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[2]);
		printf("Le PGCD de %d et %d est %d\n", a, b, ft_pgcd(a,b));
	}
	return (0);
}
