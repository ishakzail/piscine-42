# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/17 20:32:48 by lsoulier          #+#    #+#              #
#    Updated: 2020/08/17 20:55:30 by lsoulier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ft_display_file

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
	
.PHONY: all clean fclean
