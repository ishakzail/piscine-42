/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 11:04:06 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:25:46 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1 || argv[1][0] == '-')
		ft_read(STDIN_FILENO);
	else
		while (++i < argc)
			ft_open_file(argv[i], argv[0]);
	return (0);
}
