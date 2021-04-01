/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:48:06 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 19:50:19 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"


void	ft_lstswap(t_list **s)
{
	t_list	*tmp;

	if (*s != NULL && (*s)->next != NULL)
	{
		tmp = (*s)->next;
		(*s)->next = tmp->next;
		tmp->next = *s;
		*s = tmp;
	}
}

void	delete_last_node(t_list **head)
{
	t_list	*currNode;

	currNode = *head;
	if ((*head) == NULL)
		return ;
	if ((*head)->next == NULL)
	{
		free(head);
		head = NULL;
		return ;
	}
	while (currNode->next && currNode->next->next != NULL)
		currNode = currNode->next;
	free(currNode->next);
	currNode->next = NULL;
}

void	delete_first_node(t_list **head)
{
	t_list	*tmp;

	if (head == NULL || *head == NULL)
		return ;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}

void	ft_caller(char *call, t_list **a, t_list **b, int i)
{
	printf("------->%s",call);
	if (call[0] == 's' && call[1] == 'a' && i == 2)
		ft_sa(a);
	else if (call[0] == 's' && call[1] == 'b' && i == 2)
		ft_sb(b);
	else if (call[0] == 's' && call[1] == 's' && i == 2)
		ft_ss(a, b);
	else if (call[0] == 'p' && call[1] == 'a' && i == 2)
		ft_pa(a, b);
	else if (call[0] == 'p' && call[1] == 'b' && i == 2)
		ft_pb(a, b);
	else if (call[0] == 'r' && call[1] == 'a' && i == 2)
		ft_ra(a);
	else if (call[0] == 'r' && call[1] == 'b' && i == 2)
		ft_rb(b);
	else if (call[0] == 'r' && call[1] == 'r' && i == 2)
		ft_rr(a, b);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'a' && i == 3)
		ft_rra(a);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'b' && i == 3)
		ft_rrb(b);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'r' && i == 3)
		ft_rrr(a, b);
	else
		error_exit("Wrong parameter");
}
