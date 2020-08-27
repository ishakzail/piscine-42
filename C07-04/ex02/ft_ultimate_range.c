/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:22:10 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/13 20:24:25 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = -1;
	if (!range)
		return (-1);
	else
	{
		*range = NULL;
		if (max > min)
		{
			*range = malloc((max - min) * sizeof(int));
			if (!(*range))
				return (-1);
			while (++i < (max - min))
				(*range)[i] = min + i;
			return (i);
		}
		else
			return (0);
	}
}
