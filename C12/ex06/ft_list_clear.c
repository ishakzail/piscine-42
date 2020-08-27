/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:12:35 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 17:30:57 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *next_pt;

	while (begin_list)
	{
		next_pt = begin_list->next;
		(*free_fct)(begin_list->data);
		free(begin_list);	
		begin_list = next_pt;
	}
}
