/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 18:53:23 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_free_list(t_list *head)
{
	t_list *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
	free(tmp);
	}
}

int	*ft_insertion_sort(int arr[], int argc)
{
	int	n;
	int	i;
	int	j;
	int tmp;

	if (!arr)
		return(0);
	n = 0;
	while(n < argc)
		n++;
	i = 0;
	j = 0;
	while(i < n)
	{
		j = i + 1;
		while(j < n)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return(arr);
}

int ft_ptoint(int *p)
{
	int n;

	n = *p;
	return(n);
}

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;
	t_utils *u;
	int j;
	int aux[10000];
	int i;

	i = 1 ;
	j = 0;
	if (ft_check_if_correct(argv, argc) == 1 || ft_check_if_repeated(argv, argc) == 1)
	{
		printf("Error en los argumentos\n");
		return (1);
	}
	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);
	u = malloc(sizeof(t_utils));
	while (i < argc)
	{
		aux[j]= ft_atoi(argv[i]);
		u->ordered[j] = aux[j];
		temp = ft_lstnew(&aux[j]);
		ft_lstadd_back(&a, temp);
		i++;
		j++;
	}
	ft_insertion_sort(u->ordered, argc - 1);
	i = 0;
	if (argc == 4)
		ft_3numbers(&a, &b);
	else if (argc < 100)
		ft_5numbers(&a, &b);
	else
		ft_push_swap_backtrack(&a, &b, u);


if(a)
		ft_free_list(a);
//	if(b)
//		ft_free_list(b);
//	if(temp)
//		ft_free_list(temp);
//	if(u)
//		free(u);

//	getchar();
		return 0;
//	print_list(a, b);
}
