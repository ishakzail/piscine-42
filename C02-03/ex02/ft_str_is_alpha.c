/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 16:42:19 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 17:11:14 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int is_valid;

	is_valid = 1;
	if (*str != '\0')
	{
		while (*str != '\0' && is_valid)
		{
			if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
				is_valid = 1;
			else
				is_valid = 0;
			str++;
		}
	}
	return (is_valid);
}
