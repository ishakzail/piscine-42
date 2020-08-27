/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:08:31 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/23 15:24:25 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int nb_div;
	int i;

	nb_div = 2;
	i = 2;
	if (nb <= 3)
		return (nb > 1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb && i <= 46430)
	{
		if (nb % i == 0)
			nb_div++;
		i += 2;
	}
	return (nb_div == 2);
}

int	ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb) ? nb : ft_find_next_prime(nb + 1));
}
