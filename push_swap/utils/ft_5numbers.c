/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:37:24 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/25 17:15:06 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void ft_5numbers(t_list **a, t_list **b)
{
	t_list	*min;
	int		pos;
	int		size;
	int		cont;

	cont = 0;
	size = ft_lstsize(*a);
	while (*a)
	{
		min = ft_lst_min(*a, &pos, size);
		while (*a != min && (*a)->content != (min)->content)
		{
			if (pos > (float)size / 2 )
				ft_caller("rra", a, b, 3);
			else
				ft_caller("ra", a, b, 2);
		}
		if (ft_check_sort(*a, NULL))
			break ;
		ft_caller("pb", a, b, 2);
		size -= 1;
		cont++;
		if (size == 3)
			{
			ft_3numbers(a, b);
			break;
			}

	}
	while (cont--)
		{
			ft_caller("pa", a, b, 2);
		}

}
/*
void ft_5numbers_beta(t_list **a, t_list **b)
{
	t_list	*min;
	t_list	*max;
	int		pos;
	int		pos_max;
	int		size;
	int		cont;
	t_list	*aux;

	cont = 0;
	size = ft_lstsize(*a);
//		printf("------------------------->%d \n", size);
	while (*a)
	{
		min = ft_lst_min(*a, &pos);
		max = ft_lst_max(*a, &pos_max);
		if (abs((size/2) - pos) < abs((size/2) - pos_max))
			min = max;
		while ((*a != min && (int)(*a)->content != (int)(min)->content))
		{
			if (pos > (float)size / 2 )
				ft_caller("rra", a, b, 3);
			else
				ft_caller("ra", a, b, 2);
		}
		if (ft_check_sort(*a, NULL))
			break ;
		ft_caller("pb", a, b, 2);
		size -= 1;
		cont++;
		if (size == 3)
			{
			ft_3numbers(a, b);
			break;
			}

	}
	aux = *a;
	while (cont--)
		{
		ft_caller("pa", a, b, 2);
		if (ft_ptoint((void*)(*a)->content) > ft_ptoint((void*)(*a)->next->content))
			ft_caller("ra", a, b, 2);
		}
//		printf("------------------------->%d", size);
}
*/
