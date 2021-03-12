/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/12 17:25:42 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

int ft_ptoint(int *p)
{

	long int n;
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

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;
	t_list *temp2;

	int aux[argc][10];
	int aux2[argc][10];
	void (*f)();

	int i;
	int j;
	i = 1 ;

	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);
	while (i < argc)
		{
			aux[i][0] = ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i][0]);
			ft_lstadd_back(&a, temp);
			i++;
		}


	/*
	j = 1;
	while (j < 5)
		{
			aux2[j][0] = 5;
			temp2 = ft_lstnew(&aux2[j][0]);
			ft_lstadd_back(&b, temp2);
			j++;
		}
	*/

	char *call;
	call = "rr";
	print_list(a, b);
	printf("\n");

	/*
	ft_caller(call, &a, &b, ft_strlen(call));
	print_list(a, b);
		ft_caller(call, &a, &b, ft_strlen(call));
		print_list(a, b);
			ft_caller(call, &a, &b, ft_strlen(call));
			print_list(a, b);
	*/

	//if (argc == 4)
	ft_3numbers(sa, b);
	print_list(a, b);

	return 0;
}
