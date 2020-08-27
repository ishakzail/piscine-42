/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 21:33:58 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 16:54:17 by lsoulier         ###   ########.fr       */
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
	format_filename(file_name, prog);
	ft_putstr(str, 0);
	write(1, "\n", 1);
	if (errno == ENOENT)
		format_error_fd(file_name, prog);
}

void	format_filename(char *file_name, char *prog)
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
}

void	format_error_fd(char *file_name, char *prog)
{
	format_filename(file_name, prog);
	ft_putstr(strerror(EBADF), 0);
	write(1, "\n", 1);
}

void	format_param_error(int argc, char **argv)
{
	format_prog_name(argv[0]);
	if (argc == 2 && argv[1][0] == '-' && !argv[1][1])
		format_error(strerror(ENOENT), "-", argv[0]);
	else if (argc == 1)
		ft_putstr("option requires an argument", 0);
	write(1, "\n", 1);
}
