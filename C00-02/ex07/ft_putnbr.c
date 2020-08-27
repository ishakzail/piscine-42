/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:00:36 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 15:49:35 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long cur_nb;

	if (nb < 0)
		ft_putchar('-');
	cur_nb = nb < 0 ? -(long)nb : nb;
	if (cur_nb >= 10)
		ft_putnbr(cur_nb / 10);
	ft_putchar((cur_nb % 10) + '0');
}
