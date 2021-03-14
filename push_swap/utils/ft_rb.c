/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:12 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/14 10:14:27 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_rb(t_list **b)
{
	t_list *temp;
	t_list	*p;

	if(b == NULL || *b == NULL)
 		error_exit("No B pile to rotate");
	p = *b;
	temp = ft_lstnew(p->content);
	ft_lstadd_back(b, temp);
	delete_first_node(b);
}
