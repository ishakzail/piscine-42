/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 14:11:48 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/26 14:13:36 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev(char *str)
{
	int len;
	int i;
	char tmp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}