/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:44:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_5numbers(t_list **a, t_list **b)
{
	t_list	*min;
	int		arr[3];

	arr[2] = 0;
	arr[1] = ft_lstsize(*a);
	while (*a != NULL && arr[1] != 3)
	{
		min = ft_lst_min(*a, &arr[0], arr[1]);
		while (*a != min && (*a)->content != (min)->content)
		{
			if (arr[0] > (float)arr[1] / 2 )
				ft_caller("rra", a, b, 3);
			else
				ft_caller("ra", a, b, 2);
		}
		if (ft_check_sort(*a, NULL))
			break ;
		ft_caller("pb", a, b, 2);
		arr[1] -= 1;
		arr[2]++;
	}
	ft_3numbers(a, b);
	while (arr[2]--)
		ft_caller("pa", a, b, 2);
}
