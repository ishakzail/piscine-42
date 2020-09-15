/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louise <lsoulier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:27:26 by louise            #+#    #+#             */
/*   Updated: 2020/09/15 16:10:32 by louise           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *found;

	found = NULL;
	if (!found && root->left)
		found = btree_search_item(root->left, data_ref, cmpf);
	if (!((*cmpf)(root->item, data_ref)))
		found = root;
	if (!found && root->right)
		found = btree_search_item(root->right, data_ref, cmpf);
	return (found);
}
