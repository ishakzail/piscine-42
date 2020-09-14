/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:44:21 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/13 19:00:10 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *el;
	t_list *current;
	t_list *previous;

	el = ft_create_elem(data);
	current = *begin_list;
	previous = NULL;
	while (current)
	{
		if ((*cmp)(current->data, el->data) > 0)
		{
			el->next = current;
			if (previous)
				previous->next = el;
			else
				*begin_list = el;
			break ;
		}
		previous = current;
		current = current->next;
	}
}
