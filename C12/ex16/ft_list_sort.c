/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:01:58 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/13 18:02:08 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_data(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *current;
	t_list *next;

	current = *begin_list;
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
