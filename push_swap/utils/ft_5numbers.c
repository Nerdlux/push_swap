/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:37:24 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/14 13:36:33 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

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
		min = ft_lst_min(*a, &pos);
		while (*a != min && (int)(*a)->content != (int)(min)->content)
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
