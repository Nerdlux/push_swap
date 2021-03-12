/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:05 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/12 15:46:07 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ft_ra(t_list **a)
{
	t_list *temp;
	t_list	*p;

	if(a == NULL || *a == NULL)
 		error_exit("Error");
	p = *a;
	temp = ft_lstnew(p->content);
	ft_lstadd_back(a, temp);
	delete_first_node(a);
}
