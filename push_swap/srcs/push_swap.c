/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/25 14:06:22 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

int	*insertionSort(int arr[])
{
	int	n;
	int	i;
	int	j;
	int tmp;

	if (!arr)
		return(0);
	n = 0;
	while(arr[n] != 0)
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

void	ft_lstswap(t_list **s)
{
	t_list	*tmp;

	if (*s && (*s)->next)
	{
		tmp = (*s)->next;
		(*s)->next = tmp->next;
		tmp->next = *s;
		*s = tmp;
	}
}

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;
	t_utils *u;

	int average;
	int j;


	int aux[10000];
	average = 0;
	int i;
	i = 1 ;
	j = 0;


	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);

	u = NULL;
	while (i < argc)
		{
			aux[j]= ft_atoi(argv[i]);
			u->ordered[j] = aux[j];
			temp = ft_lstnew(&aux[j]);
			ft_lstadd_back(&a, temp);
			i++;
			j++;
		}

	insertionSort(u->ordered);


//	print_list(a, b);

	if (argc == 4)
		ft_3numbers(&a, &b);
	else if (argc <= 6)
		ft_5numbers(&a, &b);
	else
		ft_push_swap_backtrack(&a, &b, u);

//	print_list(a, b);
	return 0;


}

