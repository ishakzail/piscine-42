/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:40:24 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/10 12:47:28 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int r_nb;

	i = 1;
	r_nb = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			r_nb *= i;
			i++;
		}
		return (r_nb);
	}
	else
		return (0);
}
