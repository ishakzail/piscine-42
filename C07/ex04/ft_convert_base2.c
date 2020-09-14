/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:10:12 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/13 20:31:34 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		is_whitespace(char c);
int		ft_check_base(char *base);
int		ft_base_index(char *base, char c);
int		ft_atoi_base(char *str, char *base);

int		ft_convert_nbr_len(long nbr, int base_len)
{
	int nbr_len;

	nbr_len = nbr < base_len ? 1 : 2;
	while (nbr / base_len >= base_len)
	{
		nbr /= base_len;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	int_nbr;
	int		base_to_len;
	char	*r_nbr_base;
	int		new_nbr_len;
	int		is_neg;

	r_nbr_base = NULL;
	if (ft_check_base(base_from) && ft_check_base(base_to))
	{
		int_nbr = ft_atoi_base(nbr, base_from);
		is_neg = int_nbr < 0;
		base_to_len = ft_strlen(base_to);
		int_nbr = is_neg ? -int_nbr : int_nbr;
		new_nbr_len = is_neg ? 1 : 0;
		new_nbr_len += ft_convert_nbr_len(int_nbr, base_to_len);
		r_nbr_base = malloc((new_nbr_len + 1) * sizeof(char));
		r_nbr_base[new_nbr_len] = '\0';
		while (new_nbr_len-- > 0)
		{
			r_nbr_base[new_nbr_len] = base_to[int_nbr % base_to_len];
			int_nbr /= base_to_len;
		}
		r_nbr_base[0] = is_neg ? '-' : r_nbr_base[0];
	}
	return (r_nbr_base);
}
