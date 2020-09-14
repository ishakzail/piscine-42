/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:46:51 by lsoulier          #+#    #+#             */
/*   Updated: 2020/09/10 17:26:25 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;
t_list			*ft_create_elem(void *data);
void			ft_list_push_front(t_list **begin_list, void *data);
#endif
