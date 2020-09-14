/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 18:07:53 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 18:10:59 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int is_valid;

	is_valid = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && is_valid)
		{
			is_valid = *str >= ' ' && *str <= '~';
			str++;
		}
	}
	return (is_valid);
}
