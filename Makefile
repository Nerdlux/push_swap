# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 11:29:27 by jruiz-ro          #+#    #+#              #
#    Updated: 2021/03/10 19:40:24 by jruiz-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=

OBJS	= ${SRCS:.c=.o}

CC		=gcc -Wall -Wextra -Werror

FLAGS	= -Lmlx -lmlx -framework OpenGL -framework AppKit -lm

NAME	= cub3D

MAKE = MAKE -C

HEADERS = headers/*.h

LIBFT = libft/libft.a

${NAME}:	${HEADERS}
			make -C libft all
			make -C mlx all
			${CC} ${FLAGS} ${LIBFT} ${SRCS} -o ${NAME}

all: ${NAME}

bonus:		${NAME}

debug: 		${HEADERS}
			make -C $(MAKE) all
			${CC} -g ${FLAGS} ${LIBFT} ${SRCS} -o ${NAME}

clean:
			rm -f ${OBJS}
			make -C libft clean

fclean:		clean
			make -C libft fclean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re
