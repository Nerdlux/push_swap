/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/10 20:21:18 by jruiz-ro         ###   ########.fr       */
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

    printf("---------------------------------------- \n");

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
	ft_swap(temp->content, temp->next->content);
	temp = temp->next->next;
	}
}

void ft_sb(t_list *t)
{
	t_list *temp;
	temp = t;

	if (temp != NULL && temp->next != NULL)
	{
	ft_swap(temp->content, temp->next->content);
	}
}
void ft_ss(t_list *a, t_list *b)
{
	ft_sa(a);
	ft_sb(b);
}

void ft_pa(t_list **a, t_list **b)
{
	t_list *temp;
	t_list	*p;

	p = *b;
	temp = ft_lstnew(p->content);
	ft_lstadd_front(a, temp);
	delete_first_node(b);
	print_list(*a,*b);
}

void ft_pb(t_list **a, t_list **b)
{
	t_list *temp;
	t_list	*p;

	p = *a;
	temp = ft_lstnew(p->content);
	ft_lstadd_front(b, temp);
	delete_first_node(a);
	print_list(*a,*b);
}



int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;
	t_list *temp2;

	int aux[10000];
	void (*f)();

	int i;
	int j;
	i = 1 ;
	while (i < argc)
		{
			aux[i] = ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i]);
			ft_lstadd_back(&a, temp);
			i++;
		}

	ft_lstadd_back(&b, NULL);
	j = 0;
	while (j < 4)
		{
			aux[j] = ft_atoi(argv[j]);
			temp2 = ft_lstnew(&aux[j]);
			ft_lstadd_back(&b, temp2);
			j++;
		}

	print_list(a, b);
//	ft_sa(a);
	ft_pb(&a, &b);
	printf("\n");
	print_list(a,b);
	//if (argc == 4)
	//	ft_3num(t);
	return 0;
}
