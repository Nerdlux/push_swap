UTILS			= utils/ft_sa.c utils/ft_sb.c utils/ft_ss.c utils/ft_pb.c utils/ft_ra.c \
					utils/ft_rb.c utils/ft_rr.c utils/ft_rra.c utils/ft_rrb.c utils/ft_rrr.c \
						utils/ft_pa.c utils/ft_delete_first_node.c utils/ft_print_list.c \
							utils/ft_caller.c utils/ft_3numbers.c utils/ft_5numbers.c utils/ft_lstmin.c \
								utils/ft_median.c utils/ft_bignumbers.c utils/ft_split_list.c utils/ft_backtrack.c \
									utils/ft_lstswap.c

SRCS			= srcs/push_swap.c srcs/ft_check_if_correct.c srcs/ft_check_if_repeted.c

CFLAGS			= -Wall -Wextra -Werror

LIBFT = libft/libft.a

OBJS			= ${SRCS:.c=.o}
OBJS2			= ${UTILS:.c=.o}

CC				= gcc

NAME			= push_swap

CFLAGS_DEBUG	= ${CFLAGS} -g

all: ${NAME}

$(NAME): ${OBJS} ${OBJS2}
	make -C libft all
	${CC} -g -o ${NAME} ${CFLAGS} ${LIBFT} ${OBJS} ${OBJS2}
	cp push_swap ../programs

clean:
	@rm -f  *.o
	@rm -f  srcs/*.o
	@rm -f  utils/*.o
	make -C libft clean

fclean: clean
	@rm -f *.o
	@rm -f  srcs/*.o
	@rm -f  utils/*.o
	@rm -f *.out
	@rm -f ${NAME}
	@rm -f *.a
	@rm -f a.out
#	make -C libft fclean

debug:	${OBJS}
	make -C libft all
	${CC} -o ${NAME} ${CFLAGS_DEBUG} ${LIBFT} ${OBJS} ${OBJS2}

re: fclean all

.PHONY:		all clean fclean re
