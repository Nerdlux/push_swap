/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bignumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:44:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(t_list **a, t_list **b, t_utils *u)
{
	int	max;

	if (ft_lstsize(*b) == 0)
		return ;
	max = ft_get_max(*b, -1);
	printf(ANSI_COLOR_GREEN);
	ft_split_to_a(a, b, u, ft_average(*b, -1));
	printf(ANSI_COLOR_RED);
	while (ft_check_last(a, *a, u) && !ft_check_order(*a, u->ordered))
		ft_caller("ra", a, b, 2);
	printf(ANSI_COLOR_BLUE);
	ft_push_swap(a, b, u);
	printf(ANSI_COLOR_MAGENTA);
	if (ft_get_size(*a, u, max) >= 20)
		ft_backtrack_split(a, b, u, max);
	ft_backtrack(a, b, u, max);
}

void	ft_smart_rotate(t_list **a, t_list **b)
{
	float	i;

	i = -1;
	if (a != NULL)
		while (++i < (int)ft_lstsize(*a))
			if (ft_get_int(ft_lstlast(*a)) == ft_get_max(*a, -1))
				break ;
	if (i <= ((int)ft_lstsize(*a) / 2))
		ft_caller("rrb", a, b, 3);
	else
		ft_caller("rb", a, b, 2);
}

void	ft_get_max_to_a(t_list **a, t_list **b, t_utils *u)
{
	if (b != NULL)
	{
		if (ft_get_max(*b, -1) == ft_get_int(*b))
			ft_caller("pa", a, b, 2);
		else
		{
			if (ft_check_last(a, *b, u))
			{
				ft_caller("pa", a, b, 2);
				ft_caller("ra", a, b, 2);
			}
			else
				ft_smart_rotate(a, b);
		}
	}
}
