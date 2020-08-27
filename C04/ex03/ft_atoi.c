/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:04:56 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/10 12:26:22 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(char *str)
{
	int r_nb;
	int is_negative;

	r_nb = 0;
	is_negative = 0;
	while (is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		is_negative = *str == '-' ? 1 - is_negative : is_negative;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r_nb = r_nb * 10 + *str - '0';
		str++;
	}
	return (is_negative ? 0 - r_nb : r_nb);
}
