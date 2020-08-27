/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:24:00 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/14 16:07:48 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H

# define FT_STOCK_STR_H
# include "ft_stock_str.h"
#endif
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int nb_char;

	nb_char = 0;
	while (str[nb_char])
		nb_char++;
	return (nb_char);
}

char				*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dup_str;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	dup_str = malloc((src_len + 1) * sizeof(char*));
	if (!dup_str)
		return (NULL);
	while (i < src_len)
	{
		dup_str[i] = src[i];
		i++;
	}
	dup_str[src_len] = '\0';
	return (dup_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*el;

	i = 0;
	el = malloc((ac + 1) * sizeof(*el));
	if (!el)
		return (NULL);
	while (i < ac)
	{
		el[i].size = ft_strlen(av[i]);
		el[i].str = av[i];
		el[i].copy = ft_strdup(av[i]);
		i++;
	}
	el[i].str = 0;
	return (el);
}
