/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:52:49 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 17:07:35 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str, int size)
{
	if (*str)
	{
		if (size == 0)
			while (str[size])
				size++;
		write(1, str, size);
	}
}

char	*ft_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	if (*needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				while (haystack[i] == needle[i] && needle[i] && haystack[i])
					i++;
				if (!needle[i])
					return (haystack);
				else
					i = 0;
			}
			haystack++;
		}
		return (NULL);
	}
	else
		return (haystack);
}

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dest_len;
	unsigned int i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
