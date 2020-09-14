/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 17:44:02 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/12 18:02:05 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list *previous;
	t_list *current;
	t_list *next;

	current = *begin_list;
	previous = NULL;
	while (current)
	{
		next = current->next;
		if (!((*cmp)(current->data, data_ref)))
		{
			(*free_fct)(current->data);
			free(current);
			if (previous)
				previous->next = next;
			else if (next)
				*begin_list = next;
		}
		else
			previous = current;
		current = next;
	}
}
