/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:26:54 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/12 15:43:37 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_pa(t_list **a, t_list **b)
{
	t_list *temp;
	t_list	*p;

	if(b == NULL || *b == NULL)
 		error_exit("Error");
	p = *b;
	temp = ft_lstnew(p->content);
	ft_lstadd_front(a, temp);
	delete_first_node(b);
	print_list(*a,*b);
}
