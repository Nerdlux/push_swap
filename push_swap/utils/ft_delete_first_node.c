/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_first_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:06:47 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 17:49:03 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"
#include "../libft/libft.h"

void delete_last_node(t_list* head)
{
    t_list* currNode = head;
    if(head == NULL)
        return;
    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    while (currNode->next && currNode->next->next != NULL)
        currNode = currNode->next;
    free(currNode->next);
    currNode->next = NULL;
}

void delete_first_node(t_list **head)
{

  t_list *tmp;

  if(head == NULL || *head == NULL)
  	return ;
  tmp = *head;
  *head = (*head)->next;
  free(tmp);
}