/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 12:43:20 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/10 12:17:57 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\v');
}

int		ft_check_base(char *base)
{
	int is_legit;
	int i;
	int j;

	is_legit = base[0] && base[1];
	i = 0;
	j = 0;
	while (base[i] && is_legit)
	{
		j = i + 1;
		if (base[i] != '+' && base[i] != '-' && !is_whitespace(base[i]))
		{
			while (base[j] && is_legit)
			{
				is_legit = base[i] != base[j];
				j++;
			}
			i++;
		}
		else
			is_legit = 0;
	}
	return (is_legit);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		current_number;
	long	nb;

	base_len = 0;
	current_number = 0;
	nb = (long)nbr;
	if (ft_check_base(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (base[base_len])
			base_len++;
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / (base_len), base);
		}
		current_number = base[nb % base_len];
		write(1, &current_number, 1);
	}
}
