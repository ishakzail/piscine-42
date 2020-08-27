# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 14:03:05 by lsoulier          #+#    #+#              #
#    Updated: 2020/08/22 18:57:24 by lsoulier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ft_cat

SRCS 	= ft.c main.c

HEAD 	= ft.h

OBJS 	= ${SRCS:.c=.o}

CC 		= gcc

CFLAGS 	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -include ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:	
		rm -f ${OBJS}
fclean: clean
		rm -f ${NAME}
re: fclean all
	
.PHONY: all clean fclean
