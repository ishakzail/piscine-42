/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:30:46 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/14 12:50:07 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *current;
	t_list *next;

	current = *begin_list1;
	while (current->next)
		current = current->next;
	current->next = begin_list2;
	current = *begin_list1;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if ((*cmp)(current->data, next->data) > 0)
				ft_swap_data(current, next);
			next = next->next;
		}
		current = current->next;
	}
}
