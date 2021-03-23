/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bignumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:25:25 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/23 13:11:17 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void
	ft_push_swap(t_list **a, t_list **b, t_utils *u)
{
	int max;

	if (b->size == 0)
		return ;
	max = pw_get_max(b);
	pw_split_to_a(a, b, pw_get_avg(b), ft_lstsize(b));
	while ((ARRAY_DATA(a, a->size - 1) == ARRAY_DATA(a, 0) + 1 ||
		ARRAY_DATA(a, a->size - 1) == 1) && !pw_is_sorted(a))
		ft_caller("ra", a, b, 2);
	ft_push_swap(a, b);
	if (pw_get_size(a, max) >= 20)
		pw_backtrack_split(a, b, max);
	pw_backtrack(a, b, max);
}

void	ft_push_swap_backtrack(t_list **a, t_list **b, t_utils *u)
{
	if (pw_is_sorted(a))
		return ;
	pw_split_to_b(a, b, pw_get_avg(a), ft_lstsize(a));
	ft_push_swap(a, b);
	if (pw_get_size(a, pw_get_max(a)) >= 20)
	{
		pw_backtrack_split(a, b, pw_get_max(a));
		pw_backtrack_split(a, b, pw_get_max(a));
	}
	pw_backtrack(a, b, pw_get_max(a));
}

void	pw_smart_rotate(t_list **a, t_list **b, t_utils *u)
{
	int i;

	i = -1;
	while (++i < (int)ft_lstsize(a))
		if (ARRAY_DATA(a, i) == pw_get_max(a))
			break ;
	if (i <= (int)ft_lstsize(a) / 2)
		ft_caller("rrb", a, b, 3);
	else
		ft_caller("rb", a, b, 2);
}

void
	pw_get_max_to_a(t_list **a, t_list **b, t_utils *u)
{
	if (pw_get_max(b) == ARRAY_DATA(b, u->size_b - 1))
		ft_caller("pa", a, b, 2);
	else
	{
		if (ARRAY_DATA(b, u->size_b - 1) == ARRAY_DATA(a, 0) + 1 ||
			ARRAY_DATA(b, u->size_b - 1) == 1)
		{
			ft_caller("pa", a, b, 2);
			ft_caller("ra", a, b, 2);
		}
		else
			pw_smart_rotate(b, a, u);
	}
}


