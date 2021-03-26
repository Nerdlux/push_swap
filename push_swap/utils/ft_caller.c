/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caller.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:49:00 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/26 17:04:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


/*
* RECORDAR METER LEN AL USAR LA FUNCION EN EL PARAMETRO 4 i
*/

void	ft_caller(char *call, t_list **a, t_list **b, int i)
{
	printf("%s \n",call);

	if (call[0] == 's' && call[1] == 'a' && i == 2)
		ft_sa(a);
	else if (call[0] == 's' && call[1] == 'b' && i == 2)
		ft_sb(b);
	else if (call[0] == 's' && call[1] == 's' && i == 2)
		ft_ss(a, b);
	else if (call[0] == 'p' && call[1] == 'a' && ft_strlen(call) == 2)
		ft_pa(a, b);
	else if (call[0] == 'p' && call[1] == 'b' && ft_strlen(call) == 2)
		ft_pb(a, b);
	else if (call[0] == 'r' && call[1] == 'a' && i == 2)
		ft_ra(a);
	else if (call[0] == 'r' && call[1] == 'b' && i == 2)
		ft_rb(b);
	else if (call[0] == 'r' && call[1] == 'r' && i == 2)
		ft_rr(a, b);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'a' && i == 3)
		ft_rra(a);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'b' && i == 3)
		ft_rrb(b);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'r' && i == 3)
		ft_rrr(a, b);
		print_list(*a,*b);
}

int	ft_check_next_position(int a, t_utils *u)
{
	int i;
	i = 0;
	while (u->ordered[i] != a)
		i++;
	i++;
	return (u->ordered[i]);
}
