/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:41:26 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/15 15:28:30 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

t_list	*ft_lst_min(t_list *a, int *pos)
{
	int		i;
	t_list	*tmp;

	i = __INT_MAX__;
	tmp = a;
	while (a)
	{
		if (*(int *)(a->content) < i)
			i = *(int *)(a->content);
		a = a->next;
	}
	a = tmp;
	if (pos != NULL)
		*pos = 0;
	while ((*(int *)(a->content) != i))
	{
		if (pos != NULL)
			(*pos) = *pos + 1;
		a = a->next;
	}
	return (a);
}

t_list	*ft_lst_max(t_list *a, int *pos)
{
	int		i;
	t_list	*tmp;

	i = -2147483648;
	tmp = a;
	while (a)
	{
		if (*(int *)(a->content) > i)
			i = *(int *)(a->content);
		a = a->next;
	}
	a = tmp;
	if (pos != NULL)
		*pos = 0;
	while ((*(int *)(a->content) != i))
	{
		if (pos != NULL)
			(*pos) = *pos + 1;
		a = a->next;
	}
	return (a);
}
