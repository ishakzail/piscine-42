/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 11:58:56 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 10:38:59 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *r_value;
	int i;

	if (!(r_value = malloc(length * sizeof(int))))
		return (NULL);
	i = -1;
	while (++i < length)
		r_value[i] = (*f)(tab[i]);
	return (r_value);
}
