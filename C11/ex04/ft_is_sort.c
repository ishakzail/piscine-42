/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 10:27:22 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 15:53:55 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPWARD 1
#define BACKWARD 2

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort_dir;
	int cur_el;

	i = -1;
	sort_dir = 0;
	if (length >= 2)
	{
		while (++i < length - 1 && sort_dir == 0)
		{
			if (tab[i] != tab[i + 1])
				sort_dir = (*f)(tab[i], tab[i + 1]) > 0 ? BACKWARD : UPWARD;
		}
		i = -1;
		while (++i < length - 1)
		{
			cur_el = (*f)(tab[i], tab[i + 1]);
			if (sort_dir == UPWARD && cur_el > 0)
				return (0);
			else if (sort_dir == BACKWARD && cur_el < 0)
				return (0);
		}
	}
	return (1);
}
