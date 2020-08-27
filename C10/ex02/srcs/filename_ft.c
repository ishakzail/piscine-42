/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 21:38:06 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/23 11:44:59 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	format_filename_start(char *filename, int nb_files)
{
	if (nb_files > 1)
	{
		write(1, "==> ", 4);
		ft_putstr(basename(filename), 0);
		write(1, " <==\n", 5);
	}
}

void	format_filename_end(int nb_files, int cur_index, int argc)
{
	if (nb_files > 1 && (cur_index + 1 != argc))
		write(1, "\n", 1);
}
