SRC = ft_atoi.c\
	ft_isalnum.c\
	ft_itoa.c\
	ft_putendl_fd.c\
	ft_strlcpy.c\
	ft_memchr.c\
	ft_isascii.c\
	ft_putstr_fd.c\
	ft_isalpha.c\
	ft_memcpy.c\
	ft_strnstr.c\
	ft_split.c\
	ft_isdigit.c\
	ft_strlcat.c\
	ft_strlen.c\
	ft_putchar_fd.c\
	ft_strdup.c\
	ft_strchr.c\
	ft_striteri.c\
	ft_strncmp.c\
	ft_bzero.c\
	ft_substr.c\
	ft_calloc.c\
	ft_strrchr.c\
	ft_putnbr_fd.c\
	ft_strjoin.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_memmove.c\
	ft_memcmp.c\
	ft_memset.c\
	ft_strmapi.c\
	ft_strtrim.c\
	ft_isprint.c

SRC_BONUS = ft_lstadd_back.c   ft_lstdelone.c  ft_lstmap.c\
ft_lstadd_front.c  ft_lstiter.c    ft_lstnew.c\
ft_lstclear.c      ft_lstlast.c    ft_lstsize.c

OBJS =	${SRC:.c=.o}
OBJS_BONUS =	${SRC_BONUS:.c=.o}


CC =	gcc

CFLAGS =	-Wall -Werror -Wextra

ICNLUDES = libft.h

NAME = libft.a

all : ${NAME}

${NAME}:
		${CC} ${CFLAGS} -c ${SRC}
		ar rcs ${NAME} ${OBJS}

bonus:
	${CC} ${CFLAGS} -c ${SRC_BONUS}
	ar rcs ${NAME} ${OBJS_BONUS}

clean:
	rm -rf ${OBJS} ${OBJS_BONUS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean bonus
