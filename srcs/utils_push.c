/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:50:58 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 18:03:42 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_caller(t_struct *t, char *order)
{
int function;
char aux;
int target;

	aux = order[ft_len(order) - 1];
	function = ft_check_order(order);
	target = ft_check_param(aux);
	if (target == 1 || target == 3)
		{
			if (function == 1)
				ft_sa(t);
			if (function == 2)
				ft_pa(t);
			if (function == 3)
				ft_ra(t);
			if (function == 4)
				ft_rra(t);
		}
	if (target == 2 || target == 3)
		{
			if (function == 1)
				ft_sb(t);
			if (function == 2)
				ft_pb(t);
			if (function == 3)
				ft_rb(t);
			if (function == 4)
				ft_rrb(t);
		}
}
int ft_check_param(char a)
{
	if (a == "a")
		return 1;
	if (a == "b")
		return 2;
	if (a == "r")
		return 3;
	else
		error_exit("wrong letter introduced in order")
}

ft_check_order(char *order)
{
	if (order[0] == "s")
		return 1;
	if (order[0] == "p")
		return 2;
	if (order[0] == "r")
	{
		if (order[1] == "r")
			return 4;
	return 3;
	}
	else
		error_exit("wrong letter introduced in order");
}
