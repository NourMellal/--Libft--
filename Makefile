SRC	= ft_myprintf.c     ft_tools.c      ft_tools2.c		ft_putaddr.c

OBJS = ${SRC:.c=.o}

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra -I printf.h

INCLUDES = -I printf.h

CC = cc

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all fclean re clean
