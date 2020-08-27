/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 19:53:04 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 18:53:29 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	buf[16];
	int		read_r;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDWR);
		if (fd == -1)
			error_msg(CANNOT_READ);
		else
		{
			while ((read_r = read(fd, buf, 16)) > 0)
				ft_putstr(buf, read_r);
			close(fd);
		}
	}
	else if (argc == 1)
		error_msg(FILENAME_MISSING);
	else if (argc > 2)
		error_msg(TOO_MANY_ARG);
	return (0);
}
