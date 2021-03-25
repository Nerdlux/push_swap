/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:39:16 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/24 17:34:27 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"


void	ft_backtrack(t_list **a, t_list **b, int limit)
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

void	ft_backtrack_split(t_list **a, t_list **b, t_utils *u, int limit)
{
	int c;
	int i;
	int avg;

	c = 0;
	avg = ft_average(a, limit);
	while (ft_get_int(a) <= limit && ft_get_int(a) != u->ordered[0])
	{
		if (ft_get_int(a) >= avg)
		{
			ft_caller("ra", a, b, 2);
			c++;
		}
		else
			ft_caller("pb", a, b, 2);
	}
	i = -1;
	while (++i < c)
		if (ft_get_int(b) != ft_get_max(b, -1))
			ft_caller("rrr", a, b, 3);
		else
			ft_caller("rra", a, b, 3);
	if (ft_check_last(a, ft_lst_min(b, NULL, __INT_MAX__), u) && c > 0)
		ft_push_swap(a, b);
}

void	ft_push_swap_backtrack(t_list **a, t_list **b, t_utils *u)
{
	if (pw_is_sorted(a))
		return ;
	pw_split_to_b(a, b, pw_get_avg(a), a->size);
	ft_push_swap(a, b);
	if (pw_get_size(a, pw_get_max(a)) >= 20)
	{
		ft_backtrack_split(a, b, pw_get_max(a));
		ft_backtrack_split(a, b, pw_get_max(a));
	}
	ft_backtrack(a, b, pw_get_max(a));
}

void	ft_split_to_a(t_list **a, t_list **b, t_utils *u, int avg, int size)
{
	while (size-- > 0)
	{
		if (ft_lstsize(b) < 13)
			ft_get_max_to_a(a, b, u);
		else
		{
			if (avg <= ft_get_int(*b))
				ft_caller("pa", a, b, 2);
			else
			{
				if (ft_check_last(*a, b, u))
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

void	ft_split_to_b(t_list **a, t_list **b, int avg, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (avg > ft_get_int(a))
			ft_caller("pb", a, b, 2);
		else
			ft_caller("ra", a, b, 2);
		i++;
	}
}

int	ft_get_max(t_list *a, int limit)
{
	t_list *aux;
	int		max;
	int i;

	i = 0;
	aux = a;
	if (limit = -1)
		limit = INT_MAX;

	if (aux == NULL)
		return (0);
	max = ft_ptoint(aux->content);
	while (aux && i < limit)
	{
		if (max < ft_ptoint(aux->content))
			max = ft_ptoint(aux->content);
	aux = aux->next;
	i++;
	}
	return (max);
}

int	ft_get_min(t_list *a, int limit)
{
	t_list *aux;
	int		min;
	int i;

	i = 0;
	aux = a;
	if (limit = -1)
		limit = INT_MAX;

	if (aux == NULL)
		return (0);
	min = ft_ptoint(aux->content);
	while (aux && i < limit)
	{
		if (min > ft_ptoint(aux->content))
			min = ft_ptoint(aux->content);
	aux = aux->next;
	i++;
	}
	return (min);
}

int	ft_get_size(t_list *d, int limit)
{
	int		i;
	t_list *aux;

	aux = d;

	if (aux == NULL)
		return (0);
	i = 0;
	while (ft_ptoint(aux->content) <= limit && aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
