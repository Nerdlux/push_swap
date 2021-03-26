/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:35:56 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/26 16:56:08 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	ft_split_to_a(t_list **a, t_list **b, t_utils *u, int avg, int size)
{
	while (size-- > 0)
	{
		if (ft_lstsize(*b) < 13)
			ft_get_max_to_a(a, b, u);
		else
		{
			if(b)
			{
			if (avg <= ft_get_int(*b))
				ft_caller("pa", a, b, 2);
			else
			{
				if (ft_check_last(a, *b, u))
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
}


void	ft_split_to_b(t_list **a, t_list **b, int avg, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if(a)
		{
		if (avg > ft_get_int(*a))
			ft_caller("pb", a, b, 2);
		else
			ft_caller("ra", a, b, 2);
		i++;
	}
	}
}
