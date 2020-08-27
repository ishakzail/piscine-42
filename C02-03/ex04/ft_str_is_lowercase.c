/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:36:28 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 17:39:19 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int is_valid;

	is_valid = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && is_valid)
		{
			is_valid = *str >= 'a' && *str <= 'z';
			str++;
		}
	}
	return (is_valid);
}
