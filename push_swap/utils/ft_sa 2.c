/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:26:08 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/14 10:23:38 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_sa(t_list **a)
{
	if(a == NULL || *a == NULL || (*a)->next == NULL)
 		error_exit("No A stack to swap");

	ft_lstswap(a);
	}
