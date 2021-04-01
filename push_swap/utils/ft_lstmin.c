/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:44:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lst_min(t_list *a, int *pos, int counter)
{
	int		i;
	t_list	*tmp;
	int		n;

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
	int		n;

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
	int		i;
	int		size_a;

	size_a = ft_lstsize(a);
	i = 0;
	while (a != NULL)
	{
		if (ft_ptoint(a->content) != ordered[i])
			return (0);
		else
		{
			a = a->next;
			i++;
		}
	}
	return (1);
}

int	ft_get_int(t_list *a)
{
	int	res;

	res = 0;
	if (!a)
		error_exit("No values to get int from");
	res = ft_ptoint(a->content);
	return (res);
}

int	ft_is_sorted(t_list *v)
{
	int	i;

	if (!v)
		return (-1);
	i = ft_lstsize(v);
	if (i == 0)
		return (1);
	while (v != NULL)
	{
		if (ft_get_int(v) > ft_get_int(v->next))
			return (0);
		v = v->next;
	}
	return (1);
}
