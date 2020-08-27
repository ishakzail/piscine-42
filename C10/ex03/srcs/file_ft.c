/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:57:33 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 17:09:05 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_open_file(char *filename, char *prog, t_file_read *dump)
{
	int fd;

	if ((fd = open(filename, O_RDONLY)) == -1)
		format_error(strerror(errno), filename, prog);
	else
	{
		ft_hex_file(fd, dump);
		if (close(fd) == -1)
			format_error(strerror(errno), filename, prog);
	}
}

void	ft_hex_file(int fd, t_file_read *dump)
{
	while ((dump->read_r = read(fd, dump->buf, 16)) > 0)
	{
		if (dump->read_r == 16
				|| (dump->read_r != 16 && dump->nb_files == dump->file_nb))
			print_bloc(dump);
		dump->offset = dump->read_r;
		dump->nb_read += dump->read_r;
		dump->last_buf = ft_strdup(dump->buf);
	}
}

void	print_bloc(t_file_read *dump)
{
	if ((dump->last_buf
				&& ft_strcmp(dump->buf, dump->last_buf) != 0)
					|| dump->offset == 0)
	{
		format_octa(dump->nb_read);
		write(1, " ", 1);
		put_buf_hexa(dump->buf, dump->read_r);
		print_line(dump->buf, dump->read_r);
		write(1, "\n", 1);
		dump->is_first_dup = 1;
	}
	else if (dump->is_first_dup)
	{
		write(1, "*\n", 2);
		dump->is_first_dup = 0;
	}
}

void	print_last(t_file_read *dump)
{
	format_octa(dump->nb_read);
	write(1, "\n", 1);
}
