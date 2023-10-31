SRC = ft_atoi.c     ft_itoa.c      ft_memset.c      ft_putstr.c     ft_strdel.c    ft_strlcpy.c  ft_strnew.c    ft_tolower.c\
ft_bzero.c    ft_memalloc.c  ft_putchar.c     ft_putstr_fd.c  ft_strdup.c    ft_strlen.c   ft_strnstr.c   ft_toupper.c\
ft_isalnum.c  ft_memchr.c    ft_putchar_fd.c  ft_strcat.c     ft_strequ.c    ft_strmap.c   ft_strrchr.c   memccpy.c\
ft_isalpha.c  ft_memcmp.c    ft_putendl.c     ft_strchr.c     ft_striter.c   ft_strmapi.c  ft_strsplit.c  strncat.c\
ft_isascii.c  ft_memcpy.c    ft_putendl_fd.c  ft_strclr.c     ft_striteri.c  ft_strncmp.c  ft_strstr.c\
ft_isdigit.c  ft_memdel.c    ft_putnbr.c      ft_strcmp.c     ft_strjoin.c   ft_strncpy.c  ft_strsub.c\
ft_isprint.c  ft_memmove.c   ft_putnbr_fd.c   ft_strcpy.c     ft_strlcat.c   ft_strnequ.c  ft_strtrim.c

OBJS =	${SRC:.c=.o}

CC =	gcc

CFLAGS =	-Wall -Werror -Wextra

ICNLUDES = libft.h

NAME = libft.a

all : ${NAME}

${NAME}:
		${CC} ${CFLAGS} -c ${SRC}
		ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean