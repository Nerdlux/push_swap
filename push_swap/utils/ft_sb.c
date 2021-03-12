/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:28:11 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/12 16:15:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_sb(t_list **b)
{
	t_list	*temp;

	if(b == NULL || *b == NULL)
 		error_exit("Error");
	temp = *b;
	if (temp != NULL && temp->next != NULL)
		ft_swap(temp->content, temp->next->content);
}
