/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 08:41:31 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 15:07:40 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int i;
	int current_letter;

	i = 0;
	while (i < 26)
	{
		current_letter = 'z' - i;
		write(1, &current_letter, 1);
		i++;
	}
}
