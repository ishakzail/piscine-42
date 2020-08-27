/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:53:58 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 17:59:19 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int is_valid;

	is_valid = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && is_valid)
		{
			is_valid = *str >= 'A' && *str <= 'Z';
			str++;
		}
	}
	return (is_valid);
}
