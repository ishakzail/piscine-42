/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:19:03 by lsoulier          #+#    #+#             */
/*   Updated: 2021/03/15 19:50:16 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	int		width;
	int		height;
	int		rush_nb;
	char	*usage;
	char	*bad_args;

	usage = "./rush 'width' 'height' 'rush number'\n";
	if (argc == 4)
	{
		width = atoi(argv[1]);
		height = atoi(argv[2]);
		rush_nb = atoi(argv[3]);
		bad_args = "argument cannot be negative\n";
		if (width < 0 || height < 0 || rush_nb < 0 || rush_nb > 5)
			write(1, bad_args, strlen(bad_args));
		else
			rush(width, height, rush_nb);
	}
	else
		write(1, usage, strlen(usage));
	return (0);
}
