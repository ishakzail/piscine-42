/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:12:01 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:55:28 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_swap_buf(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_open_file(char *filename, int nb_bytes, char *prog)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		format_error(strerror(errno), filename, prog);
	else
	{
		ft_tail_file(fd, nb_bytes);
		if (close(fd) == -1)
			format_error(strerror(errno), filename, prog);
	}
}

void	ft_tail_file(int fd, int nb_bytes)
{
	char	*cur_buf;
	char	*prev_buf;
	int		read_r;
	int		i;

	i = 0;
	cur_buf = malloc(nb_bytes * sizeof(char));
	prev_buf = malloc(nb_bytes * sizeof(char));
	while ((read_r = read(fd, cur_buf, nb_bytes)) > 0)
	{
		if (read_r != nb_bytes)
		{
			if (*prev_buf)
			{
				while (i++ < read_r)
					prev_buf++;
				ft_putstr(prev_buf, nb_bytes - read_r);
			}
			ft_putstr(cur_buf, read_r);
		}
		else
			ft_swap_buf(&cur_buf, &prev_buf);
	}
	free(cur_buf);
}

void	ft_tail_stdin(int nb_bytes)
{
	char	*buf;
	int		read_r;
	char	*str;
	char	*tmp;
	int		cur_len;

	buf = malloc((nb_bytes + 1) * sizeof(char));
	str = malloc((nb_bytes + 1) * sizeof(char));
	tmp = NULL;
	while ((read_r = read(STDIN_FILENO, buf, nb_bytes)) > 0)
	{
		buf[read_r] = '\0';
		cur_len = ft_strlen(str);
		tmp = malloc((cur_len + read_r + 1) * sizeof(char));
		tmp = ft_strncat(str, buf, read_r);
		ft_swap_buf(&str, &tmp);
	}
	read_r = -1;
	cur_len = ft_strlen(str);
	while (++read_r < cur_len - nb_bytes - 1)
		str++;
	ft_putstr(str, 0);
	free(buf);
}

char	*ft_strncat(char *dest, char *src, int n)
{
	int i;
	int d_len;

	i = 0;
	d_len = 0;
	while (dest[d_len])
		d_len++;
	while (src[i] && i < n)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}
