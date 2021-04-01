/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 17:51:38 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"

# include "../checker/checker.h"
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

typedef struct s_utils
{
	int		ordered[10000];
	int		ok;
}				t_utils;

// SRCS

void		ft_swap(int *a, int *b);
int			ft_check_if_correct(char **argv, int argc);
int			ft_check_if_repeated(char **argv, int argc);
long int	ft_special_atoi(const char *j);

// OBJS

void		ft_pa(t_list **a, t_list **b);
void		ft_pb(t_list **a, t_list **b);
void		ft_ra(t_list **a);
void		ft_rb(t_list **b);
void		ft_rr(t_list **a, t_list **b);
void		ft_rra(t_list **a);
void		ft_rrb(t_list **b);
void		ft_rrr(t_list **a, t_list **b);
void		ft_sa(t_list **t);
void		ft_sb(t_list **t);
void		ft_ss(t_list **a, t_list **b);

void		delete_first_node(t_list **head);
void		delete_last_node(t_list **head);
void		print_list(t_list *a, t_list *b);
int			ft_ptoint(int *p);
int			ft_get_int(t_list *a);
void		ft_lstswap(t_list **s);
t_list		*ft_lst_min(t_list *a, int *pos, int counter);
t_list		*ft_lst_max(t_list *a, int *pos, int counter);
int			ft_check_sort(t_list *a, t_list *b);
int			ft_check_last(t_list **a, t_list *to_check, t_utils *utils);

void		ft_caller(char *call, t_list **a, t_list **b, int i);
void		ft_caller2(char *call, t_list **a, t_list **b, int i);
void		ft_caller3(char *call, t_list **a, t_list **b, int i);
void		ft_caller4(char *call, t_list **a, t_list **b, int i);
int			*ft_insertion_sort(int arr[], int argc);
int			ft_check_order(t_list *a, int *ordered);

int			ft_median(int *list);
int			ft_average(t_list *a, int count);

void		ft_3numbers(t_list **a, t_list **b);
void		ft_5numbers(t_list **a, t_list **b);
void		ft_bignumbers(t_list **a, t_list **b, int *ordered);
void		ft_5numbers_beta(t_list **a, t_list **b);

int			ft_get_max(t_list *a, int limit);
int			ft_get_min(t_list *a, int limit);
int			ft_get_size(t_list *a, t_utils *u, int limit);
void		ft_smart_rotate(t_list **a, t_list **b);
void		ft_get_max_to_a(t_list **a, t_list **b, t_utils *u);

void		ft_split_to_a(t_list **a, t_list **b, t_utils *u, int avg);
void		ft_split_to_b(t_list **a, t_list **b, int avg, int size);

void		ft_backtrack(t_list **a, t_list **b, t_utils *u, int limit);
void		ft_push_swap_backtrack(t_list **a, t_list **b, t_utils *u);
void		ft_backtrack_split(t_list **a, t_list **b, t_utils *u, int limit);

void		ft_push_swap(t_list **a, t_list **b, t_utils *u);
int			ft_is_sorted(t_list *v);

int			ft_check_next(int a, t_utils *u);
void		ft_free_list(t_list *head);
void		ft_lstswap(t_list **s);
#endif
