/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 18:12:15 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_list *a, t_list *b)
{
	char	out[100];
	int		separator;

	separator = 50;
	ft_memset(out, '-', separator);
	out[separator] = 0;
	printf("%s\n", out);
	while (a != NULL || b != NULL)
	{
		if (a != NULL)
		{
			printf("%d", ft_ptoint(a->content));
			a = a->next;
		}
		printf("\t\t\t\t\t");
		if (b != NULL)
		{
			printf("%d", ft_ptoint(b->content));
			b = b->next;
		}
		printf("\n");
	}
}

int	ft_check_sort(t_list *a, t_list *b)
{
	if (b == NULL || a == NULL)
		return (0);
	if (a->next == NULL)
		return (1);
	while (a->next != NULL)
	{
		if (*(int *)(a->content) > *(int *)(a->next->content))
			return (0);
		a = a->next;
	}
	return (1);
}
