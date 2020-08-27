# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 14:11:49 by lsoulier          #+#    #+#              #
#    Updated: 2020/08/23 11:35:37 by lsoulier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ft_tail

SRCD	= srcs/

SRCS 	= string_ft.c file_ft.c error_ft.c main.c filename_ft.c

HEAD 	= includes

OBJS 	= ${addprefix ${SRCD},${SRCS:.c=.o}}

CC 		= gcc

CFLAGS 	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:	
		rm -f ${OBJS}
fclean: clean
		rm -f ${NAME}
re:		fclean all
	
.PHONY: all clean fclean
