/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:06:29 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/11 11:15:20 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin;
	t_list	*previous;

	i = -1;
	previous = NULL;
	while (++i < size)
	{
		begin = ft_create_elem(strs[i]);
		begin->next = previous;
		previous = begin;
	}
	return (begin);
}
