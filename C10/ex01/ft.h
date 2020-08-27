/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 11:03:07 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/24 12:26:28 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 30000
# include <unistd.h>
# include <sys/stat.h>
# include <sys/errno.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <libgen.h>

void	ft_putstr(char *str, int buf_size);
void	format_error(char *str, char *filename, char *prog_name);
void	ft_open_file(char *filename, char *prog_name);
void	ft_read(int fd);
int		ft_strlen(char *str);
#endif
