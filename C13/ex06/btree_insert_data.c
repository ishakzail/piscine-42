/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louise <lsoulier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:09:23 by louise            #+#    #+#             */
/*   Updated: 2020/09/15 14:57:29 by louise           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else
	{
		if ((*cmpf)((*root)->item, item) > 0)
		{
			if (!((*root)->left))
				(*root)->left = btree_create_node(item);
			else
				btree_insert_data(&((*root)->left), item, cmpf);
		}
		if ((*cmpf)((*root)->item, item) <= 0)
		{
			if (!((*root)->right))
				(*root)->right = btree_create_node(item);
			else
				btree_insert_data(&((*root)->right), item, cmpf);
		}
	}
}
