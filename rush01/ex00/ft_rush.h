/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 13:12:51 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/16 13:35:03 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H

# define FT_RUSH_H
# define TOP 0
# define DOWN 1
# define LEFT 0
# define RIGHT 1
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_game {
	int **board;
	int **col;
	int **row;
}				t_game;

void			ft_set_board(t_game *game);
int				ft_check_argv(char *str);
int				*ft_set_game(char *str, int index);
void			ft_init_board(t_game *game);
void			ft_display_board(int **board);
void			ft_set_board(t_game *game);
void			ft_backtrack(t_game *game, int x, int y, int *is_finish);
int				ft_check_error(int *a, int *b);
int				ft_check(t_game game);
int				ft_doublon_line(t_game game, int line);
int				ft_doublon_col(t_game game, int col);
int				ft_check_views(t_game game);
int				ft_view_col_top(t_game game, int col);
int				ft_view_col_down(t_game game, int col);
int				ft_view_row_left(t_game game, int line);
int				ft_view_row_right(t_game game, int line);
#endif
