/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 21:15:07 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 17:10:32 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	putnbr_hexa(int nb, int is_small)
{
	char *base_hexa;

	base_hexa = BASE_HEXA;
	if (is_small)
		write(1, "0", 1);
	if (nb >= 16)
		putnbr_hexa(nb / 16, 0);
	write(1, &base_hexa[nb % 16], 1);
}

void	format_octa(int nb)
{
	char	*base_hexa;
	char	nbr_octa[9];
	int		i;

	base_hexa = BASE_HEXA;
	i = 7;
	nbr_octa[8] = '\0';
	while (i >= 0)
	{
		nbr_octa[i] = base_hexa[nb % 16];
		nb /= 16;
		i--;
	}
	write(1, nbr_octa, 8);
}

void	put_buf_hexa(char *buf, int read_r)
{
	int i;

	i = 0;
	while (i < read_r)
	{
		if (i % 8 == 0)
			write(1, " ", 1);
		putnbr_hexa((int)buf[i], buf[i] < 16);
		write(1, " ", 1);
		i++;
	}
	while (read_r < 16)
	{
		if (read_r % 8 == 0)
			write(1, " ", 1);
		write(1, "   ", 3);
		read_r++;
	}
}

void	print_line(char *buf, int read_r)
{
	int i;

	i = 0;
	write(1, " |", 2);
	while (i < read_r)
	{
		if (buf[i] >= ' ' && buf[i] <= '~')
			write(1, &buf[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
}
