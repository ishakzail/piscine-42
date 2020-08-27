/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 11:00:51 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:52:09 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int nb_bytes;
	int nb_files;
	int i;

	if (argc > 2 && ft_strstr(argv[1], "-c") && argv[2] && is_num(argv[2]))
	{
		nb_bytes = ft_atoi(argv[2]);
		nb_files = argc - 3;
		if (nb_files > 0)
		{
			i = 2;
			while (++i < argc)
			{
				format_filename_start(argv[i], nb_files);
				ft_open_file(argv[i], nb_bytes, argv[0]);
				format_filename_end(nb_files, i, argc);
			}
		}
		else
			ft_tail_stdin(nb_bytes);
	}
	else
		format_param_error(argc, argv);
	return (0);
}
