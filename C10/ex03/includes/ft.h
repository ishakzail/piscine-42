/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:38:00 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/25 16:59:31 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BASE_HEXA "0123456789abcdef"
# include <unistd.h>
# include <stdlib.h>
# include <libgen.h>
# include <string.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/errno.h>

typedef struct	s_file_read
{
	char	*buf;
	int		read_r;
	char	*last_buf;
	int		offset;
	int		nb_read;
	int		is_first_dup;
	int		nb_files;
	int		file_nb;
}				t_file_read;

void			ft_putstr(char *str, int size);
char			*ft_strstr(char *haystack, char *needle);
char			*ft_strdup(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
void			putnbr_hexa(int nb, int is_small);
void			format_octa(int nb);
void			put_buf_hexa(char *buf, int read_r);
void			print_line(char *buf, int read_r);
void			print_bloc(t_file_read *dump);
void			print_last(t_file_read *dump);
void			ft_open_file(char *filename, char *prog, t_file_read *dump);
void			ft_hex_file(int fd, t_file_read *dump);
void			ft_hex_stdin(t_file_read *dump);
void			format_error(char *str, char *file_name, char *prog);
void			format_param_error(int argc, char **argv);
void			format_prog_name(char *prog);
void			format_filename(char *file_name, char *prog);
void			format_error_fd(char *file_name, char *prog);
#endif
