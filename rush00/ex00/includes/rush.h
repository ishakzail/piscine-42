/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:41:39 by lsoulier          #+#    #+#             */
/*   Updated: 2021/03/15 20:12:18 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef enum	e_border_names
{
	TOP_LEFT,
	TOP_RIGHT,
	HORIZONTAL_BORDER,
	VERTICAL_BORDER,
	DOWN_LEFT,
	DOWN_RIGHT,
	SPACE,
	TOTAL_BORDER_NAME
}				t_border_names;

typedef enum	e_rush_names
{
	RUSH00,
	RUSH01,
	RUSH02,
	RUSH03,
	RUSH04,
	TOTAL_RUSH_NAMES
}				t_rush_names;

void			rush(int width, int height, int rush_nb);
void			fill_grid(char *output, int width,
					int height, const char *char_tab);
#endif
