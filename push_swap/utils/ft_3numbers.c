/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:44:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_multicaller(char *a1, char *b1, t_list **a, t_list **b)
{
	ft_caller(a1, a, b, ft_strlen(a1));
	ft_caller(b1, a, b, ft_strlen(b1));
}

void	ft_3numbers(t_list **a, t_list **b)
{
	int		aux[3];
	int		i;
	t_list	*list;

	list = *a;
	i = 0;
	while (i < 3)
	{
		aux[i] = ft_ptoint(list->content);
		if (list != NULL && list->next != NULL)
			list = list->next;
		i++;
	}
	if (aux[0] > aux[1] && aux[1] < aux[2] && aux[0] < aux[2])
		ft_caller("sa", a, b, 2);
	if (aux[0] > aux[1] && aux[1] > aux[2] && aux[0] > aux[2])
		ft_multicaller("sa", "rra", a, b);
	if (aux[0] > aux[1] && aux[1] < aux[2] && aux[0] > aux[2])
		ft_caller("ra", a, b, 2);
	if (aux[0] < aux[1] && aux[1] > aux[2] && aux[0] < aux[2])
		ft_multicaller("sa", "ra", a, b);
	if (aux[0] < aux[1] && aux[1] > aux[2] && aux[0] > aux[2])
		ft_caller("rra", a, b, 3);
}
