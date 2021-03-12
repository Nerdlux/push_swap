/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:01:13 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/12 17:23:15 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_3numbers(t_list **a, t_list **b)
{
	int aux[3];
	int i;
	t_list	*list;
	list = a;
	i = 0;

	while(i < 3)
		{
			aux[i] = ft_ptoint(list->content);
			list = list->next;
			printf("%d -> en %d \n", aux[i], i);
			i++;
		}
		printf("ok\n");
	if (aux[0] > aux[1] && aux[1] < aux[2] && aux[0] > aux[2])
		ft_caller("sa", a, b, ft_strlen("sa"));
	if (aux[0] > aux[1] && aux[1] > aux[2] && aux[0] < aux[2])
	{
		ft_caller("sa", a, b, ft_strlen("sa"));
		ft_caller("rra", a, b, ft_strlen("rra"));
	}
	if (aux[0] > aux[1] && aux[1] < aux[2] && aux[0] < aux[2])
		ft_caller("ra", a, b, ft_strlen("ra"));
	if (aux[0] < aux[1] && aux[1] > aux[2] && aux[0] > aux[2])
	{
		ft_caller("sa", a, b, ft_strlen("sa"));
		ft_caller("ra", a, b, ft_strlen("ra"));
	}
	if (aux[0] < aux[1] && aux[1] > aux[2] && aux[0] < aux[2])
		ft_caller("rra", a, b, ft_strlen("rra"));
}
