/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 11:02:52 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:27:37 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str, int buf_size)
{
	if (!buf_size)
		buf_size = ft_strlen(str);
	write(1, str, buf_size);
}

void	ft_open_file(char *filename, char *prog_name)
{
	int	fd;

	fd = open(filename, O_RDWR);
	if (fd == -1)
		format_error(strerror(errno), filename, prog_name);
	else
	{
		ft_read(fd);
		if (close(fd) == -1)
			format_error(strerror(errno), filename, prog_name);
	}
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_read(int fd)
{
	char	buf[BUF_SIZE];
	int		nb_read;

	while ((nb_read = read(fd, buf, BUF_SIZE)) > 0)
		ft_putstr(buf, nb_read);
}

void	format_error(char *str, char *filename, char *prog_name)
{
	int name_len;

	name_len = 0;
	ft_putstr(basename(prog_name), 0);
	write(1, ": ", 2);
	if (filename)
	{
		while (filename[name_len])
			name_len++;
		write(1, basename(filename), name_len);
	}
	write(1, ": ", 2);
	ft_putstr(str, 0);
	write(1, "\n", 1);
}
