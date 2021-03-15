SRCS= rush.c main.c
OBJS= ${addprefix srcs/, ${SRCS:.c=.o}}
HEAD= includes
CC= cc
CFLAGS=	-Wall -Werror -Wextra
NAME= rush

.c.o:		
	${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}
$(NAME):	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
all: ${NAME}
clean:
	rm -rf ${OBJS}
fclean: clean
	rm -rf ${NAME}
re: fclean all
.PHONY: all clean fclean re
