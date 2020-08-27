/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:21:02 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 15:34:10 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin;
	t_list	*elem;

	i = 0;
	begin = NULL;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		if (begin)
			elem->next = begin;
		begin = elem;
		i++;
	}
	return (begin);
}
