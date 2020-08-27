/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:18:16 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 09:18:22 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int r_value;
	int sign;

	r_value = 0;
	sign = 1;
	while (is_ws(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		sign = *str == '-' ? -sign : sign;
		str++;
	}
	while (is_num(*str))
	{
		r_value = r_value * 10 + (*str - '0');
		str++;
	}
	return (r_value * sign);
}
