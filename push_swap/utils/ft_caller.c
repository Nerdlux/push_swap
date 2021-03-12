/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caller.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:49:00 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/11 19:31:05 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

/*
* RECORDAR METER LEN AL USAR LA FUNCION EN EL PARAMETRO 4 i
*/

void	ft_caller(char *call, t_list **a, t_list **b, int i)
{
	if (call[0] == 's' && call[1] == 'a' && i == 2)
	{
		ft_sa(a);
		printf("%s \n", call);
	}
	if (call[0] == 's' && call[1] == 'b' && i == 2)
	{
		ft_sb(b);
		printf("%s \n", call);
	}
	if (call[0] == 's' && call[1] == 's' && i == 2)
	{
		ft_ss(a, b);
		printf("%s \n", call);
	}
	ft_caller2(call, a, b, i);
}

void	ft_caller2(char *call, t_list **a, t_list **b, int i)
{
	if (call[0] == 'p' && call[1] == 'a' && ft_strlen(call) == 2)
	{
		ft_pa(a, b);
		printf("%s \n", call);
	}
	if (call[0] == 'p' && call[1] == 'b' && ft_strlen(call) == 2)
	{
		ft_pb(a, b);
		printf("%s \n", call);
	}
	ft_caller3(call, a, b, i);
}

void	ft_caller3(char *call, t_list **a, t_list **b, int i)
{
		if (call[0] == 'r' && call[1] == 'a' && i == 2)
	{
		ft_ra(a);
		printf("%s \n", call);
	}
	if (call[0] == 'r' && call[1] == 'b' && i == 2)
	{
		ft_rb(b);
		printf("%s \n", call);
	}
	if (call[0] == 'r' && call[1] == 'r' && i == 2)
	{
		ft_rr(a, b);
		printf("%s \n", call);
	}
	ft_caller4(call, a, b, i);
}

void	ft_caller4(char *call, t_list **a, t_list **b, int i)
{
	if (call[0] == 'r' && call[1] == 'r' && call[3] == 'a' && i == 3)
	{
		ft_rra(a);
		printf("%s \n", call);
	}
	if (call[0] == 'r' && call[1] == 'r' && call[2] == 'b' && i == 3)
	{
		ft_rrb(b);
		printf("%s \n", call);
	}
	if (call[0] == 'r' && call[1] == 'r' && call[2] == 'r' && i == 3)
	{
		ft_rrr(a, b);
		printf("%s \n", call);
	}
}
