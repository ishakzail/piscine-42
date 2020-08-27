/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 10:36:54 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 10:39:32 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int old_int_a_value;
	int old_int_b_value;

	old_int_a_value = *a;
	old_int_b_value = *b;
	*a = old_int_a_value / old_int_b_value;
	*b = old_int_a_value % old_int_b_value;
}
