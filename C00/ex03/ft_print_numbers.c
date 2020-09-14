/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 08:47:50 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 15:07:57 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;
	int current_number;

	i = 0;
	while (i < 10)
	{
		current_number = '0' + i;
		write(1, &current_number, 1);
		i++;
	}
}
