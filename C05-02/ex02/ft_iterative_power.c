/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:01:58 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/10 14:58:46 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int r_nb;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		i = 0;
		r_nb = nb != 0;
		while (i < power && nb)
		{
			r_nb *= nb;
			i++;
		}
		return (r_nb);
	}
}
