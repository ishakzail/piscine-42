/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 08:27:06 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 15:06:24 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int i;
	int current_letter;

	i = 0;
	while (i < 26)
	{
		current_letter = 'a' + i;
		write(1, &current_letter, 1);
		i++;
	}
}
