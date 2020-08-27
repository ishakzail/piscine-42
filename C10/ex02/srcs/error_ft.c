/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:12:45 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:58:25 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	format_prog_name(char *prog)
{
	ft_putstr(basename(prog), 0);
	write(1, ": ", 2);
}

void	format_error(char *str, char *file_name, char *prog)
{
	int		name_len;
	char	*filename;

	name_len = 0;
	filename = basename(file_name);
	format_prog_name(prog);
	while (filename[name_len])
		name_len++;
	write(1, filename, name_len);
	write(1, ": ", 2);
	ft_putstr(str, 0);
	write(1, "\n", 1);
}

void	format_param_error(int argc, char **argv)
{
	format_prog_name(argv[0]);
	if (argc > 2 && ft_strstr(argv[1], "-c")
			&& argv[2] && !is_num(argv[2]))
	{
		ft_putstr("illegal offset -- ", 0);
		ft_putstr(argv[2], 0);
	}
	else if (argc > 1 && ft_strstr(argv[1], "-c") && !argv[2])
		ft_putstr("option requires an argument -- c", 0);
	write(1, "\n", 1);
}
