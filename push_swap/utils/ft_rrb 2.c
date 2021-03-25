/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:29 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/14 11:15:43 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_rrb(t_list **b)
{
	t_list *temp;
	t_list	*p;

	if(b == NULL || *b == NULL)
 		error_exit("No A stack to rotate");
	p = ft_lstlast(*b);
	temp = ft_lstnew(p->content);
	ft_lstadd_front(b, temp);
	delete_last_node(b);
}
