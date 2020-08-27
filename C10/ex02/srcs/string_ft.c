/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:05:29 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/23 15:07:14 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int r_nb;

	r_nb = 0;
	while (*str)
	{
		r_nb = r_nb * 10 + *str - '0';
		str++;
	}
	return (r_nb);
}

int		is_num(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (!(*to_find))
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			while (str[i] == to_find[i] && str[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str);
			else
				i = 0;
		}
		str++;
	}
	return (0);
}

void	ft_putstr(char *str, int buf_size)
{
	int str_len;

	str_len = 0;
	if (!buf_size)
	{
		while (str[str_len])
			str_len++;
		buf_size = str_len;
	}
	write(1, str, buf_size);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
