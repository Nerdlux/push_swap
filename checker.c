/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/10 16:02:32 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/push_swap.h"
#include "libft/libft.h"

void	ft_putnbr(int *p)
{
	unsigned int	s;
	int n = *p;

	printf("%d \n", n);
}

int ft_ptoint(int *p)
{
	int n;
	n = *p;
	return(n);
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

	while (temp != NULL && temp->next != NULL)
	{
	ft_swap(&temp->content, &temp->next->content);
	temp = temp->next->next;
	}
}

void ft_sb(t_list *t)
{
	t_list *temp;
	temp = t;

	while (temp != NULL && temp->next != NULL)
	{
	ft_swap(&temp->content, &temp->next->content);
	temp = temp->next->next;
	}
}

/*
void ft_sb(t_struct *t)
{
	int aux;

	aux = t->b[0];
	t->b[0] = t->b[1];
	t->b[1] = aux;
}

void	ft_rra(t_struct *t)
{

}

void	ft_3num(t_struct *t)
{
	if (t->a[0] > t->a[1] && t->a[1] < t->a[2] && t->a[0] < t->a[2])
		ft_sa();
	if (t->a[0] > t->a[1] && t->a[1] > t->a[2] && t->a[0] < t->a[2])
	{
		ft_sa();
		ft_rra();
	}
	if (t->a[0] > t->a[1] && t->a[1] < t->a[2] && t->a[0] > t->a[2])
		ft_ra();
	if (t->a[0] < t->a[1] && t->a[1] > t->a[2] && t->a[0] > t->a[2])
	{
		ft_sa();
		ft_ra();
	}
	if (t->a[0] < t->a[1] && t->a[1] > t->a[2] && t->a[0] < t->a[2])
		ft_rra();
}
*/

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;

	int aux[10000];
	void (*f)();

	f = ft_putnbr;
	//ft_lstnew(NULL);
	int i;
	i = 1 ;
	//a = ft_lstnew(argv[1]);
	while (i < argc)
		{
			aux[i] = ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i]);
			ft_lstadd_back(&a, temp);
			i++;
		}
	ft_lstiter(a, f);
	ft_sa(a);
	printf("\n");
	ft_lstiter(a, f);
	//if (argc == 4)
	//	ft_3num(t);
	return 0;
}
