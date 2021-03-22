/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bignumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:25:25 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/22 17:05:16 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_bignumbers(t_list **a, t_list **b, int *ordered)
{
	int ok;
	int size;
	int n;
	t_list *min;
	int pos;

	size = ft_lstsize(*a);
	ok = 0;
	n = size/2;
	while(ft_check_order(a, ordered) == 0)
	{
		while(size > n)
		{

			if (ft_ptoint((*a)->content) < ft_average(*a,(ft_lstsize(*a) - ok)))
			{
				ft_caller("pb", a, b, 2);
				size--;
			}
			min = ft_lst_min(*a, &pos, ft_lstsize(*a) - ok);
			if(ft_check_last(a, *a, ordered))
			{
				ft_caller("ra", a, b, 2);
				ok++;
			}
			if (pos > (float)(size - ok) / 2 )
				ft_caller("rra", a, b, 3);
			else
				ft_caller("ra", a, b, 2);
	}
}






void
	ft_push_swap_backtrack(t_list **a, t_list **b, int *ordered)
{
	if (ft_check_order(a, ordered))
		return ;
	ft_split_to_b(a, b, ft_average(a), ft_lstsize(a));
	ft_push_swap(a, b);
	if (pw_get_size(a, pw_get_max(a)) >= 20)
	{
		pw_backtrack_split(a, b, pw_get_max(a));
		pw_backtrack_split(a, b, pw_get_max(a));
	}
	pw_backtrack(a, b, pw_get_max(a));
}

void	ft_split_to_b(t_list *a, t_list *b, int avg, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (avg > ft_ptoint(a->content))
			ft_caller("pb", a, b, 2);
		else
			ft_caller("ra", a, b, 2);
		i++;
	}
}

void	ft_push_swap(t_list *a, t_list *b)
{
	int max;
	t_list aux;

	if (ft_lstsize(b) == 0)
		return ;
	aux = ft_lst_max(b);
	max = ft_ptoint(aux->content);
	pw_split_to_a(a, b, ft_average(b), ft_lstsize(b));
	while ((ARRAY_DATA(a, a->size - 1) == ARRAY_DATA(a, 0) + 1 ||
		ARRAY_DATA(a, a->size - 1) == 1) && !pw_is_sorted(a))
		pw_rotate(a, b, "ra");
	ft_push_swap(a, b);
	if (pw_get_size(a, max) >= 20)
		pw_backtrack_split(a, b, max);
	pw_backtrack(a, b, max);
}

void
	pw_split_to_a(t_array *a, t_array *b, int avg, int size)
{
	while (size-- > 0)
	{
		if (ft_lstsize(b) < 13)
			pw_get_max_to_a(a, b);
		else
		{
			if (avg <= ARRAY_DATA(b, b->size - 1))
				pw_push(a, b, "pa");
			else
			{
				if (ARRAY_DATA(b, b->size - 1) == ARRAY_DATA(a, 0) + 1 ||
					ARRAY_DATA(b, b->size - 1) == 1)
				{
					pw_push(a, b, "pa");
					pw_rotate(a, b, "ra");
				}
				else
					pw_rotate(b, a, "rb");
			}
		}
	}
}

void
	pw_get_max_to_a(t_list *a, t_list *b, int *ordered)
{
	if (pw_get_max(b) == b)
		ft_caller("pa", a, b, 2);
	else
	{
		if (ft_check_last(a, b, ordered))
		{
			ft_caller("pa",a, b, 2);
			ft_caller("ra", a, b, 2);
		}
		else
			pw_smart_rotate(b, a);
	}
}

void
	pw_smart_rotate(t_list *a, t_list *b)
{
	int i;

	i = -1;
	while (++i < ft_lstsize(a))
		if (ARRAY_DATA(a, i) == pw_get_max(a))
			break ;
	if (i <= (int)a->size / 2)
		pw_rev_rotate(a, b, "rrb");
	else
		pw_rotate(a, b, "rb");
}
/*
* POR AQUI VAMOS
*/