/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:44:06 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/13 20:21:24 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	range_len;
	unsigned int	i;
	int				*range_tab;

	range_tab = NULL;
	if (min < max)
	{
		range_len = max - min;
		i = 0;
		range_tab = malloc(range_len * sizeof(int));
		if (!range_tab)
			return (NULL);
		while (i < range_len)
		{
			range_tab[i] = min + i;
			i++;
		}
	}
	return (range_tab);
}
