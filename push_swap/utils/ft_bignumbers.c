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
