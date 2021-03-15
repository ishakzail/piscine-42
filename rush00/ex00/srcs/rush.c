/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:25:16 by lsoulier          #+#    #+#             */
/*   Updated: 2021/03/15 20:18:13 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		get_position(int width, int height, int x, int y)
{
	int	position;

	if (y == 0 && x == 0)
		position = TOP_LEFT;
	else if (y == 0 && x == width - 1)
		position = TOP_RIGHT;
	else if (y == height - 1 && x == 0)
		position = DOWN_LEFT;
	else if (y == height - 1 && x == width - 1)
		position = DOWN_RIGHT;
	else if (((y == 0) || (y == height - 1)))
		position = HORIZONTAL_BORDER;
	else if (((x == 0) || (x == width - 1)))
		position = VERTICAL_BORDER;
	else
		position = SPACE;
	return (position);
}

void	fill_grid(char *output, int width, int height, const char *char_tab)
{
	int	y;
	int	x;
	int	position;

	y = -1;
	while (++y < height)
	{
		x = -1;
		while (++x < width)
		{
			position = get_position(width, height, x, y);
			output[(y * (width + 1)) + x] = char_tab[position];
		}
		output[(y * (width + 1)) + x] = '\n';
	}
	output[(width + 1) * height] = '\0';
}

void	rush(int width, int height, int rush_nb)
{
	char	*output;
	char	*char_tab[TOTAL_BORDER_NAME];

	char_tab[RUSH00] = "oo-|oo ";
	char_tab[RUSH01] = "/\\**\\/ ";
	char_tab[RUSH02] = "AABBCC ";
	char_tab[RUSH03] = "ACBBAC ";
	char_tab[RUSH04] = "ACBBCA ";
	if (width >= 0 && height >= 0)
	{
		output = (char*)malloc((sizeof(char) * (((width + 1) * height) + 1)));
		if (output)
		{
			fill_grid(output, width, height, char_tab[rush_nb]);
			write(1, output, strlen(output));
			free(output);
		}
	}
}
