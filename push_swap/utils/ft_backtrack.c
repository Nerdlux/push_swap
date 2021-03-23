/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:39:16 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/23 13:11:59 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"


void	pw_backtrack(t_list **a, t_list **b, int limit)
{
	while (ARRAY_DATA(a, a->size - 1) <= limit &&	ARRAY_DATA(a, a->size - 1) != 1)
	{
		if (ARRAY_DATA(a, a->size - 1) == ARRAY_DATA(a, 0) + 1)
			ft_caller("ra", a, b, 2);
		else
			ft_caller("pb", a, b, 2);
	}
	if (pw_get_min(b) == ARRAY_DATA(a, 0) + 1)
		ft_push_swap(a, b);
}

void	pw_backtrack_split(t_list **a, t_list **b, int limit)
{
	int c;
	int i;
	int avg;

	c = 0;
	avg = pw_get_avg_limit(a, limit);
	while (ARRAY_DATA(a, a->size - 1) <= limit && ARRAY_DATA(a, a->size - 1) != 1)
	{
		if (ARRAY_DATA(a, a->size - 1) >= avg)
		{
			ft_caller("ra", a, b, 2);
			c++;
		}
		else
			ft_caller("pb", a, b, 2);
	}
	i = -1;
	while (++i < c)
		if (ARRAY_DATA(b, b->size - 1) != pw_get_max(b))
			ft_caller("rrr", a, b, 3);
		else
			ft_caller("rra", a, b, 3);
	if (pw_get_min(b) == ARRAY_DATA(a, 0) + 1 && c > 0)
		ft_push_swap(a, b);
}

void
	ft_push_swap_backtrack(t_list **a, t_list **b, t_utils *u)
{
	if (pw_is_sorted(a))
		return ;
	pw_split_to_b(a, b, pw_get_avg(a), a->size);
	ft_push_swap(a, b);
	if (pw_get_size(a, pw_get_max(a)) >= 20)
	{
		pw_backtrack_split(a, b, pw_get_max(a));
		pw_backtrack_split(a, b, pw_get_max(a));
	}
	pw_backtrack(a, b, pw_get_max(a));
}

void	pw_split_to_a(t_list **a, t_list **b, int avg, int size)
{
	while (size-- > 0)
	{
		if (b->size < 13)
			pw_get_max_to_a(a, b);
		else
		{
			if (avg <= ARRAY_DATA(b, b->size - 1))
				ft_caller("pa", a, b, 2);
			else
			{
				if (ARRAY_DATA(b, b->size - 1) == ARRAY_DATA(a, 0) + 1 ||
					ARRAY_DATA(b, b->size - 1) == 1)
				{
					ft_caller("pa", a, b, 2);
					ft_caller("ra", a, b, 2);
				}
				else
					ft_caller("rb", a , b, 2);
			}
		}
	}
}

void
	pw_split_to_b(t_list **a, t_list **b, int avg, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (avg > ft_ptoint((*a)->content))
			ft_caller("pb", a, b, 2);
		else
			ft_caller("ra", a, b, 2);
		i++;
	}
}
