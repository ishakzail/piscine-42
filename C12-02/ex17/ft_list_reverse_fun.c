/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:09:53 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/13 18:39:27 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		size;
	t_list	*el1;
	t_list	*el2;

	i = 0;
	size = ft_list_size(begin_list);
	while (i < size / 2)
	{
		el1 = ft_list_at(begin_list, i);
		el2 = ft_list_at(begin_list, size - i - 1);
		ft_swap_data(el1, el2);
		i++;
	}
}
