# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/20 09:20:40 by lsoulier          #+#    #+#              #
#    Updated: 2020/08/20 09:20:52 by lsoulier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
HEAD	= ft.h
SRCS	= ft_atoi.c ft_bool.c ft_doop.c ft_op.c ft_str.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
.c.o:
		${CC} ${CFLAGS} -include ${HEAD} -c ${SRCS}
${NAME}:${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}
all:	${NAME}
clean:
		rm -rf ${OBJS}
fclean:	clean
		rm -rf ${NAME}
re: fclean all
.PHONY: all clean fclean re
