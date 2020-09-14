/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:56:45 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/13 20:20:31 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dup_str;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	dup_str = malloc((src_len + 1) * sizeof(*dup_str));
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
