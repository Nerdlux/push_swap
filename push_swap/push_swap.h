/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:36 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/23 12:37:23 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#define GLOBALB 0

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct	s_utils
{
	int		size_a;
	int		size_b;
	int		*ordered;
	int		ok;
}				t_utils;


// SRCS

void	ft_swap(int* a, int* b);

// OBJS

void	ft_pa(t_list **a, t_list **b);
void 	ft_pb(t_list **a, t_list **b);
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra(t_list **a);
void	ft_rrb(t_list **b);
void	ft_rrr(t_list **a, t_list **b);
void	ft_sa(t_list **t);
void	ft_sb(t_list **t);
void	ft_ss(t_list **a, t_list **b);

void	delete_first_node(t_list **head);
void	delete_last_node(t_list **head);
void	print_list(t_list *a, t_list *b);
int		ft_ptoint(int *p);
void	ft_lstswap(t_list **s);
t_list	*ft_lst_min(t_list *a, int *pos, int counter);
t_list	*ft_lst_max(t_list *a, int *pos, int counter);
int		ft_check_sort(t_list *a, t_list *b);
int		ft_check_last(t_list **a, t_list *b, int *ordered);

void	ft_caller(char *call, t_list **a, t_list **b, int i);
void	ft_caller2(char *call, t_list **a, t_list **b, int i);
void	ft_caller3(char *call, t_list **a, t_list **b, int i);
void	ft_caller4(char *call, t_list **a, t_list **b, int i);
int		*insertionSort(int arr[]);
int		ft_check_order(t_list *a, int *ordered);

int		ft_median(int *list);
long	ft_average(t_list *a, int count);

void	ft_3numbers(t_list **a, t_list **b);
void	ft_5numbers(t_list **a, t_list **b);
void	ft_bignumbers(t_list **a, t_list **b, int *ordered);
void 	ft_5numbers_beta(t_list **a, t_list **b);


#endif
