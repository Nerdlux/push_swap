/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:53:59 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 19:58:35 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

// List of includes

# include "../push_swap/push_swap.h"
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct		s_struct
{
	char	string[2048];
	char    **parseString;
	int		len_parse;
	int		*all_int;
	int		*all_ord_int;
}                   s_struct;

// UTILS

void		ft_putstr(char *s);
char		**ft_split(char const *s, char c);
void		*ft_memset(void *b, int c, size_t len);
int			ft_check_if_all_correct(s_struct *s_alpha, char **argv, int argc);
int			ft_count_words(char **arr);
void		ft_putnbr(int n);
size_t		ft_strlen(const char *s);
char		*ft_trim(char *str);
int			ft_isinteger(char *str);
int			*ft_insertion_sort(int arr[], int argc);
int			ft_test_commmands(s_struct *s_alpha);
void		delete_first_node(t_list **head);
void		delete_last_node(t_list **head);
void		ft_lstswap(t_list **s);

void		ft_caller(char *call, t_list **a, t_list **b, int i);

int	ft_get_int(t_list *a);
#endif
