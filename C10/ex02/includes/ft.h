/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:12:11 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:52:05 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <sys/stat.h>
# include <sys/errno.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <libgen.h>

void	ft_swap_buf(char **a, char **b);
void	ft_tail_file(int fd, int nb_bytes);
void	ft_open_file(char *filename, int nb_bytes, char *prog);
void	ft_tail_stdin(int nb_bytes);
int		ft_atoi(char *str);
int		is_num(char *str);
char	*ft_strncat(char *dest, char *src, int n);
void	ft_putstr(char *str, int buf_size);
char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
void	format_error(char *str, char *file_name, char *prog);
void	format_prog_name(char *prog);
void	format_param_error(int argc, char **argv);
void	format_filename_start(char *filename, int nb_files);
void	format_filename_end(int nb_files, int cur_index, int argc);
#endif
