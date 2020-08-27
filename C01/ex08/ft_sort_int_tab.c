/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:44:17 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 13:00:06 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int replaced_element_value;
	int i;
	int j;

	replaced_element_value = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				replaced_element_value = tab[i];
				tab[i] = tab[j];
				tab[j] = replaced_element_value;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
