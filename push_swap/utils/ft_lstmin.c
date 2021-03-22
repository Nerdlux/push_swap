/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:41:26 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/22 12:55:38 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

t_list	*ft_lst_min(t_list *a, int *pos, int counter)
{
	int		i;
	t_list	*tmp;
	int n;

	n = 0;
	i = __INT_MAX__;
	tmp = a;
	while (a && n < counter)
	{
		if (*(int *)(a->content) < i)
			i = *(int *)(a->content);
		a = a->next;
		n++;
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

t_list	*ft_lst_max(t_list *a, int *pos, int counter)
{
	int		i;
	t_list	*tmp;
	int n;

	i = -2147483648;
	n = 0;
	tmp = a;
	while (a && n < counter)
	{
		if (*(int *)(a->content) > i)
			i = *(int *)(a->content);
		a = a->next;
		n++;
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

int	ft_check_order(t_list *a, int *ordered)
{
	int i;

	i = 0;
	while(a)
	{
		if(ft_ptoint(a->content) != ordered[i])
		{
			return(0);
		}
		else
		{
			a = a->next;
			i++;
		}
	}
	return(1);
}

