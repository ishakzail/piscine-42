/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:09:15 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 21:10:42 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_hexa(long nb, int is_small)
{
	char	cur_f;
	char	*base;

	base = "0123456789abcdef";
	cur_f = 0;
	if (nb >= 16)
		ft_putnbr_hexa(nb / 16, 0);
	cur_f = base[nb % 16];
	if (is_small)
		write(1, "0", 1);
	write(1, &cur_f, 1);
}

void	char_hexa(unsigned char *c)
{
	long	tmp_c;
	int		i;

	tmp_c = (long)c;
	i = 0;
	while (tmp_c / 16 > 0)
	{
		tmp_c /= 16;
		i++;
	}
	while ((16 - i) > 0)
	{
		i++;
		write(1, "0", 1);
	}
	ft_putnbr_hexa((long)c, 0);
	write(1, ": ", 2);
}

void	line_hexa(unsigned char *str, unsigned int index, unsigned int size)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (index + j < size && j < 16)
	{
		c = str[index + j];
		ft_putnbr_hexa(c, c < 16);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
		if (c == '\0')
			break ;
	}
	while (j < 16)
	{
		write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	print_line(unsigned char *str, unsigned int index, unsigned int size)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (index + j < size && j < 16)
	{
		c = str[index + j];
		if (c >= ' ' && c <= '~')
			write(1, &str[index + j], 1);
		else
			write(1, ".", 1);
		j++;
		if (c == '\0')
			break ;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char*)addr;
	i = 0;
	if (size != 0)
	{
		while (i < size && str[i])
		{
			if (i % 16 == 0)
			{
				char_hexa(&str[i]);
				line_hexa(str, i, size);
				print_line(str, i, size);
				write(1, "\n", 1);
			}
			i++;
		}
	}
	return (addr);
}
