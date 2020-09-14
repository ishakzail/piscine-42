/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:12:27 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/13 10:37:23 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int nb_char;

	nb_char = 0;
	while (str[nb_char])
		nb_char++;
	return (nb_char);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_check_base(char *base)
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

int	ft_base_index(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int r_nb;
	int is_negative;
	int base_len;

	r_nb = 0;
	is_negative = 0;
	base_len = ft_strlen(base);
	if (ft_check_base(base))
	{
		while (is_whitespace(*str))
			str++;
		while (*str == '-' || *str == '+')
		{
			is_negative = *str == '-' ? 1 - is_negative : is_negative;
			str++;
		}
		while (ft_base_index(base, *str) != base_len)
		{
			r_nb = r_nb * base_len + ft_base_index(base, *str);
			str++;
		}
	}
	return (is_negative ? 0 - r_nb : r_nb);
}
