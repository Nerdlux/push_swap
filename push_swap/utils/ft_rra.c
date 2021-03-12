/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:24 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/12 16:16:03 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_rra(t_list **a)
{
	t_list *temp;
	t_list	*p;

	if(a == NULL || *a == NULL)
 		error_exit("Error");
	p = ft_lstlast(*a);
	temp = ft_lstnew(p->content);
	ft_lstadd_front(a, temp);
	delete_last_node(*a);
}
