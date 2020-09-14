/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:52:17 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/11 12:00:54 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*elem;
	unsigned int	i;

	i = 0;
	while (begin_list && i != nbr)
	{
		if (i == nbr)
			elem = begin_list;
		else
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	return (i == nbr ? begin_list : NULL);
}
