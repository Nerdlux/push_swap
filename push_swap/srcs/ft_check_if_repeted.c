/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_repeted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 18:10:45 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_if_repeated(char **argv, int argc)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < argc - 1)
	{
		while (n < argc)
		{
			if (ft_memcmp(argv[n], "0", ft_strlen(argv[n])) == 0)
			{
				n++;
				continue ;
			}
			if (ft_special_atoi(argv[i]) == ft_special_atoi(argv[n]))
				return (1);
			n++;
		}
		i++;
		n = i + 1;
	}
	return (0);
}

void	ft_free_all(t_list **a, t_list **b, t_utils *u)
{
	if (a)
		ft_free_list(*a);
	if (b)
		ft_free_list(*b);
	if (u)
		free(u);
}
