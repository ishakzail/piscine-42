/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:35:46 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/13 20:19:29 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int nb_char;

	nb_char = 0;
	while (str[nb_char++])
		;
	return (nb_char);
}

int		ft_count_char(int size, char **strs, char *sep)
{
	int i;
	int nb_of_char;

	i = 0;
	nb_of_char = size > 0 ? ft_strlen(sep) * (size - 1) : 0;
	while (i < size)
	{
		nb_of_char += ft_strlen(strs[i]);
		i++;
	}
	return (nb_of_char + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*concat_str;

	i = 0;
	if (size > 0)
	{
		concat_str = malloc((ft_count_char(size, strs, sep)) * sizeof(char));
		if (!concat_str)
			return (NULL);
		*concat_str = '\0';
		while (i < size)
		{
			concat_str = ft_strcat(concat_str, strs[i]);
			if (i < size - 1)
				concat_str = ft_strcat(concat_str, sep);
			i++;
		}
	}
	else
		concat_str = malloc(sizeof(char));
	return (concat_str);
}
