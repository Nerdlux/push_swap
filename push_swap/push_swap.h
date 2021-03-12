/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:36 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/12 16:41:46 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_struct
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}				t_struct;

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
void	print_list(t_list *a, t_list *b);
int		ft_ptoint(int *p);

void	ft_caller(char *call, t_list **a, t_list **b, int i);
void	ft_caller2(char *call, t_list **a, t_list **b, int i);
void	ft_caller3(char *call, t_list **a, t_list **b, int i);
void	ft_caller4(char *call, t_list **a, t_list **b, int i);

void	ft_3numbers(t_list **a, t_list **b);

#endif
