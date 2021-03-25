/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:05:16 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/14 13:19:03 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	print_list(t_list *a, t_list *b)
{

	char	out[100];
	int		separator;

	separator = 50;
	ft_memset(out, '-', separator);
	out[separator] = 0;
	printf("%s\n", out);
    while(a || b)
    {
		if (a)
		{
			printf("%d", ft_ptoint(a->content));
			a = a->next;
		}
		printf("\t\t\t\t\t");
		if (b)
		{
			printf("%d", ft_ptoint(b->content));
			b = b->next;
		}
	printf("\n");
    }
}

int		ft_check_sort(t_list *a, t_list *b)
{
	if (b || !a)
		return (0);
	if (!a->next)
		return (1);
	while (a->next)
	{
		if (*(int*)(a->content) > *(int*)(a->next->content))
			return (0);
		a = a->next;
	}
	return (1);
}
