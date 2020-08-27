/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:49:22 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 09:53:56 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int len;
	int i;

	len = 0;
	i = -1;
	while (tab[len])
		len++;
	while (++i < len - 1)
	{
		if ((*cmp)(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(tab + i, tab + i + 1);
			i = -1;
		}
	}
}
