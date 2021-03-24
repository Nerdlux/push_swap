/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bignumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:25:25 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/24 12:47:50 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void
	ft_push_swap(t_list **a, t_list **b, t_utils *u)
{
	int max;

	if (ft_lstsize(b) == 0)
		return ;
	max = ft_get_max(b, -1);
	ft_split_to_a(a, b, ft_get_avg(b), ft_lstsize(b));
	while (ft_check_last(a, a, u) && !ft_check_order(a, u))
		ft_caller("ra", a, b, 2);
	ft_push_swap(a, b, u);
	if (ft_get_size(a, max) >= 20)
		pw_backtrack_split(a, b, max);
	pw_backtrack(a, b, max);
}

void	ft_push_swap_backtrack(t_list **a, t_list **b, t_utils *u)
{
	if (ft_check_sort(a, b))
		return ;
	ft_split_to_b(a, b, pw_get_avg(a), ft_lstsize(a));
	ft_push_swap(a, b);
	if (ft_get_size(a, ft_get_max(a, -1)) >= 20)
	{
		pw_backtrack_split(a, b, pw_get_max(a));
		pw_backtrack_split(a, b, pw_get_max(a));
	}
	pw_backtrack(a, b, pw_get_max(a));
}

void	ft_smart_rotate(t_list **a, t_list **b)
{
	int i;

	i = -1;
	while (++i < (int)ft_lstsize(a))
		if (ft_get_int(ft_lstlast(a)) == ft_get_max(a, -1))
			break ;
	if (i <= (int)ft_lstsize(a) / 2)
		ft_caller("rrb", a, b, 3);
	else
		ft_caller("rb", a, b, 2);
}

void	ft_get_max_to_a(t_list **a, t_list **b, t_utils *u)
{
	if (ft_get_max(b, -1) == ft_ptoint(b))
		ft_caller("pa", a, b, 2);
	else
	{
		if (ft_check_last(a, b, u))
		{
			ft_caller("pa", a, b, 2);
			ft_caller("ra", a, b, 2);
		}
		else
			ft_smart_rotate(b, a);
	}
}


