/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:26:00 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/21 12:20:47 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_hexa(unsigned char c, int c_is_small)
{
	char *base_hexa;

	base_hexa = "0123456789abcdef";
	if (c_is_small)
		write(1, "0", 1);
	if (c < 16)
		write(1, &base_hexa[c], 1);
	else
	{
		ft_putstr_hexa(c / 16, 0);
		write(1, &base_hexa[c % 16], 1);
	}
}

void	ft_putstr_non_printable(char *strs)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)strs;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1, "\\", 1);
			ft_putstr_hexa(str[i], str[i] < 16);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
