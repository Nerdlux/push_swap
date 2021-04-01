/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:44:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_backtrack(t_list **a, t_list **b, t_utils *u, int limit)
{
	if (a != NULL)
	{
		while (ft_get_int(*a) <= limit && ft_get_int(*a) != u->ordered[0])
		{
			if (ft_check_last(a, *a, u))
				ft_caller("ra", a, b, 2);
			else
				ft_caller("pb", a, b, 2);
		}
	}
	printf(ANSI_COLOR_YELLOW);
	if (b != NULL && a != NULL)
		if (ft_get_min(*b, -1) == ft_check_next(ft_get_int(ft_lstlast(*a)), u))
			ft_push_swap(a, b, u);
}

void	ft_backtrack_split(t_list **a, t_list **b, t_utils *u, int limit)
{
	int	c;
	int	i;

	c = 0;
	while (ft_get_int(*a) <= limit && ft_get_int(*a) != u->ordered[0])
	{
		if (ft_get_int(*a) >= 2147483647)
		{
			ft_caller("ra", a, b, 2);
			c++;
		}
		else
			ft_caller("pb", a, b, 2);
	}
	i = -1;
	while (++i < c)
	{
		if (ft_get_int(*b) != ft_get_max(*b, -1))
			ft_caller("rrr", a, b, 3);
		else
			ft_caller("rra", a, b, 3);
	}
	if (ft_get_min(*b, -1) == ft_get_int(ft_lstlast(*a)) && c > 0)
		ft_push_swap(a, b, u);
}

void	ft_push_swap_backtrack(t_list **a, t_list **b, t_utils *u)
{
	if (ft_check_order(*a, u->ordered))
		return ;
	ft_split_to_b(a, b, ft_average(*a, -1), ft_lstsize(*a));
	ft_push_swap(a, b, u);
	if (ft_get_size(*a, u, ft_get_max(*a, -1)) >= 20)
	{
		ft_backtrack_split(a, b, u, ft_get_max(*a, -1));
		ft_backtrack_split(a, b, u, ft_get_max(*a, -1));
	}
	ft_backtrack(a, b, u, ft_get_max(*a, -1));
}

int	ft_get_max(t_list *a, int limit)
{
	t_list		*aux;
	int			max;
	int			i;

	i = 0;
	aux = a;
	if (limit == -1)
		limit = INT_MAX;
	if (aux == NULL)
		return (0);
	max = -2147483647;
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
	t_list	*aux;
	int		min;
	int		i;

	i = 0;
	aux = a;
	if (limit == -1)
		limit = INT_MAX;
	if (aux == NULL)
		return (0);
	min = 2147483647;
	while (aux && i < limit)
	{
		if (min > ft_ptoint(aux->content))
			min = ft_ptoint(aux->content);
		aux = aux->next;
		i++;
	}
	return (min);
}
