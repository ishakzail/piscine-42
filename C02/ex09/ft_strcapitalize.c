/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:00:04 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/06 19:43:00 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int i;
	int previous_char;

	i = 0;
	previous_char = 0;
	while (str[i] != '\0')
	{
		if (!previous_char || !is_alphanumeric(previous_char))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
		}
		else if (is_alphanumeric(previous_char))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
		}
		previous_char = str[i];
		i++;
	}
	return (str);
}

int		is_alphanumeric(char c)
{
	int is_numeric;
	int is_lowercase;
	int is_uppercase;
	int is_matching;

	is_numeric = c >= '0' && c <= '9';
	is_lowercase = c >= 'A' && c <= 'Z';
	is_uppercase = c >= 'a' && c <= 'z';
	is_matching = is_numeric || is_lowercase || is_uppercase;
	return (is_matching);
}
