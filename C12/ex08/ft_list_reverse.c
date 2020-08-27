/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 10:54:48 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/26 12:21:13 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *el1;
	t_list *el2;
	t_list *parkour;
	
	parkour = *begin_list;	
	while (parkour->next)
	{
		el1 = *begin_list;
		el2 = (*begin_list)->next;
		*begin_list = el2;
		(*begin_list)->next = el1;
		parkour = (*begin_list)->next->next;
	}
}
