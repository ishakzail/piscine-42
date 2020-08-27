/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:49:01 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 15:11:02 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;
	t_list *elem;

	last = *begin_list;
	elem = ft_create_elem(data);
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = elem;
	}
	else
		*begin_list = elem;
}
