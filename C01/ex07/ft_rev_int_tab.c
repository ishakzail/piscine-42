/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 11:40:18 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 12:40:52 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int replaced_element_value;
	int i;

	replaced_element_value = 0;
	i = 0;
	while (i < size / 2)
	{
		replaced_element_value = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = replaced_element_value;
		i++;
	}
}
