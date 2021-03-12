/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:26:08 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/12 16:15:42 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_sa(t_list **a)
{
	t_list *temp;

	if(a == NULL || *a == NULL)
 		error_exit("Error");
	temp = *a;
	if (temp != NULL && temp->next != NULL)
		ft_swap(temp->content, temp->next->content);
}
