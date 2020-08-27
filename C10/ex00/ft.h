/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:25:09 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/18 11:06:51 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# define FILENAME_MISSING 0
# define TOO_MANY_ARG 1
# define CANNOT_READ 2

void	error_msg(int error_nb);
void	ft_putstr(char *str, int buf_size);
#endif
