/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:18:13 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/10 16:55:33 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
