# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#              #
#    Updated: 2021/03/31 17:55:38 by jruiz-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_litoa.c ft_lstclear_bonus.c ft_lstsize_bonus.c ft_memmove.c ft_split.c ft_strlen.c ft_substr.c ft_atoi.c ft_isascii.c ft_llhextoa.c ft_lstdelone_bonus.c ft_lutoa.c ft_memset.c ft_strchr.c ft_strmapi.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_llitoa.c ft_lstiter_bonus.c ft_memccpy.c ft_putchar_fd.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_calloc.c ft_isprint.c ft_llutoa.c ft_lstlast_bonus.c ft_memchr.c ft_putendl_fd.c ft_strjoin.c ft_strnstr.c ft_utoa.c ft_hextoa.c ft_itoa.c ft_lstadd_back_bonus.c  ft_lstmap_bonus.c ft_memcmp.c ft_putnbr_fd.c ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_lhextoa.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_memcpy.c ft_putstr_fd.c ft_strlcpy.c ft_strtrim.c get_next_line.c error_exit.c free_and_null.c ft_isspace.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc -Wall -Wextra -Werror

NAME	= libft.a

${NAME}:	${OBJS} libft.h
			ar rc ${NAME} ${OBJS}

all:		${NAME}

bonus:		${NAME}

clean:
			rm -f ${OBJS}


fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re
