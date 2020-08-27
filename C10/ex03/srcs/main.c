/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:36:45 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 17:08:33 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	set_dump(t_file_read *dump)
{
	if (!(dump->buf = malloc(sizeof(char) * 16)))
		return ;
	if (!(dump->last_buf = malloc(sizeof(char) * 16)))
		return ;
	dump->nb_read = 0;
	dump->is_first_dup = 1;
}

int		main(int argc, char **argv)
{
	int			i;
	t_file_read	*dump;

	i = 1;
	if (!(dump = malloc(sizeof(t_file_read))))
		return (0);
	set_dump(dump);
	if (argc >= 3 && ft_strstr(argv[1], "-C"))
	{
		dump->nb_files = argc - 2;
		while (++i < argc)
		{
			dump->file_nb = i - 1;
			ft_open_file(argv[i], argv[0], dump);
		}
		print_last(dump);
	}
	else if (argc == 2 && ft_strstr(argv[1], "-C"))
		ft_hex_file(STDIN_FILENO, dump);
	else
		format_param_error(argc, argv);
	free(dump);
	return (0);
}
