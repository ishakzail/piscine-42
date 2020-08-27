/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:27:02 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/18 11:24:54 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str, int buf_size)
{
	int str_len;

	str_len = 0;
	if (*str)
	{
		if (!buf_size)
		{
			while (str[str_len])
				str_len++;
			buf_size = str_len;
		}
		write(1, str, buf_size);
	}
}

void	error_msg(int error_nb)
{
	if (error_nb == FILENAME_MISSING)
		ft_putstr("File name missing.\n", 0);
	else if (error_nb == TOO_MANY_ARG)
		ft_putstr("Too many arguments.\n", 0);
	else if (error_nb == CANNOT_READ)
		ft_putstr("Cannot read file.\n", 0);
	else
		ft_putstr("Error unknown.\n", 0);
}
