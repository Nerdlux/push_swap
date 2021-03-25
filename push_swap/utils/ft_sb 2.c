/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:28:11 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/14 10:23:08 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_sb(t_list **b)
{

	if(b == NULL || *b == NULL || (*b)->next == NULL)
 		error_exit("No B stack to swap");

	ft_lstswap(b);
}
