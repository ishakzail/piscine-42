# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 12:29:15 by lsoulier          #+#    #+#              #
#    Updated: 2020/08/24 21:32:50 by lsoulier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	ft_hexdump
SRCD=	srcs/
HEAD=	includes
SRCS=	hexa_ft.c file_ft.c string_ft.c error_ft.c main.c
OBJS=	${addprefix ${SRCD},${SRCS:.c=.o}}
CC=		gcc
CFLAGS=	-Wall -Werror -Wextra
.c.o:
		${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}
${NAME}:${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}
all:	${NAME}
clean:
		rm -rf ${OBJS}
fclean:	clean
		rm -rf ${NAME}
re:		fclean all
.PHONY:	all clean fclean re
