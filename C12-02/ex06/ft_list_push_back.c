/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 18:42:41 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/10 19:14:25 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *current;

	elem = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = elem;
	else
	{
		current = *begin_list;
		while (current->next)
			current = current->next;
		current->next = elem;
	}
}
