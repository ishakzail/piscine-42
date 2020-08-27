/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:19:21 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 09:23:23 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		doop(int nb1, int nb2, char sym)
{
	int		(*op[5])(int, int);
	char	op_sym[5];
	int		i;

	i = -1;
	op[0] = &sum;
	op[1] = &sub;
	op[2] = &mul;
	op[3] = &div;
	op[4] = &mod;
	op_sym[0] = '+';
	op_sym[1] = '-';
	op_sym[2] = '*';
	op_sym[3] = '/';
	op_sym[4] = '%';
	while (++i < 5)
		if (op_sym[i] == sym)
			return ((*op[i])(nb1, nb2));
	return (0);
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;

	if (argc == 4)
	{
		if (!is_op(argv[2]))
			write(1, "0\n", 2);
		else
		{
			nb1 = ft_atoi(argv[1]);
			nb2 = ft_atoi(argv[3]);
			if (argv[2][0] == '/' && nb2 == 0)
				ft_putstr("Stop : division by zero", 0);
			else if (argv[2][0] == '%' && nb2 == 0)
				ft_putstr("Stop : modulo by zero", 0);
			else
				ft_putnbr(doop(nb1, nb2, argv[2][0]));
			write(1, "\n", 1);
		}
	}
	return (0);
}
