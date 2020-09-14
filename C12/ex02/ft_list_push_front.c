/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:09:27 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/10 17:19:44 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *begin_tmp;

	elem = ft_create_elem(data);
	if (*begin_list)
	{
		begin_tmp = *begin_list;
		*begin_list = elem;
		elem->next = begin_tmp;
	}
}
