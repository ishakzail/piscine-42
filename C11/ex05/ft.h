/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:20:57 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 09:21:06 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *str, int size);
int		doop(int nb1, int nb2, char sym);
int		ft_atoi(char *str);
int		is_num(char c);
int		is_ws(char c);
int		is_op(char *str);
int		mod(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		sub(int a, int b);
int		sum(int a, int b);
#endif
