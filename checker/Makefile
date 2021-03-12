UTILS			= utils/ft_putstr.c utils/ft_split.c utils/ft_memset.c utils/ft_atoi.c utils/ft_count_words.c \
					utils/ft_putnbr.c utils/ft_strlen.c utils/ft_calloc.c utils/ft_isinteger.c

SRCS			= srcs/checker.c srcs/check_if_all_correct.c

CFLAGS			= -Wall -Wextra -Werror 

OBJS			= ${SRCS:.c=.o}
OBJS2			= ${UTILS:.c=.o}

CC				= gcc

NAME			= checker

CFLAGS_DEBUG	= ${CFLAGS} -g

all: ${NAME}

$(NAME): ${OBJS} ${OBJS2}
	${CC} -o ${NAME} ${CFLAGS} ${OBJS} ${OBJS2}

clean:
	@rm -f  *.o
	@rm -f  srcs/*.o
	@rm -f  utils/*.o

fclean: clean
	@rm -f *.o
	@rm -f  srcs/*.o
	@rm -f  utils/*.o
	@rm -f *.out
	@rm -f *.a
	@rm -f checker

debug:	${OBJS}
	${CC} -o ${NAME} ${CFLAGS_DEBUG} ${OBJS}

re: fclean all
