/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 18:44:18 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/12 18:50:07 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *current;

	current = *begin_list1;
	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
