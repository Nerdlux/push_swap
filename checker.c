/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/10 17:53:33 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/push_swap.h"
#include "libft/libft.h"


int ft_ptoint(int *p)
{
	int n;
	n = *p;
	return(n);
}

void print_list(t_list *a, t_list *b)
{

    printf("--------------------------------- \n");

    while(a || b)
    {
		if (a)
		{
        printf("%d", ft_ptoint(a->content));
        a = a->next;
		}
		printf("\t\t\t\t\t");
		if (b)
		{
		printf("%d", ft_ptoint(b->content));
        b = b->next;
		}
	printf("\n");
    }

    printf("END\n");
}

void delete_first_node(t_list **head) {
  t_list *tmp;

  /*Linked list does not exist or the list is empty*/
  if(head == NULL || *head == NULL) return;

  /*Storing the head to a temporary variable*/
  tmp = *head;

  /*Moving head to the next node*/
  *head = (*head)->next;

  /*Deleting the first node*/
  free(tmp);
}
void insert_front(t_list **head, int value) {

    t_list * new_node = NULL;

    /*Allocating memory for the new node*/
    new_node = (t_list *)malloc(sizeof(t_list));

    if (new_node == NULL)
    {
        printf("Failed to insert element. Out of memory");
    }

    new_node->content = value;

    /*Pointing the new node to where head is currently pointing to*/
    new_node->next = *head;

    /*Pointing head to new node.*/
    *head = new_node;
}

void ft_swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sa(t_list *t)
{
	t_list *temp;
	temp = t;

	if (temp != NULL && temp->next != NULL)
	{
	ft_swap(&temp->content, &temp->next->content);
	temp = temp->next->next;
	}
}

void ft_sb(t_list *t)
{
	t_list *temp;
	temp = t;

	if (temp != NULL && temp->next != NULL)
	{
	ft_swap(&temp->content, &temp->next->content);
	}
}
void ft_ss(t_list *a, t_list *b)
{
	ft_sa(a);
	ft_sb(b);
}

void ft_pa(t_list *a, t_list *b)
{
	insert_front(b, ft_ptoint(a->content));
	//delete_first_node(a);
}



int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;

	int aux[10000];
	void (*f)();

	int i;
	i = 6 ;
	while (i < argc)
		{
			aux[i] = ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i]);
			ft_lstadd_back(&a, temp);
			i++;
		}
	i = 1;
	while (i < argc)
		{
			aux[i] = ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i]);
			ft_lstadd_back(&b, temp);
			i++;
		}
	print_list(a,b);
	ft_pa(a, b);
//	ft_ss(a,b);
	printf("\n");
	print_list(a,b);
	//if (argc == 4)
	//	ft_3num(t);
	return 0;
}
