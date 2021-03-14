/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <rpunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/14 09:54:19 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

/*
*
*/
void insertionSort(int arr[])
{
    int i;
	int	key;
	int	j;
	int n;

	n = 0;
	while (arr[n] != 0)
		n++;

	i = 1;
	while (i < n)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
		i++;
    }
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

	int aux[10000];

	int i;
	i = 1 ;

	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);

	while (i < argc)
		{
			aux[i]= ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i]);
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
	call = "pa";

	print_list(a, b);
	printf("\n");

//	if (argc <= 6)
		ft_5numbers(&a, &b);
	print_list(a, b);
	printf("-----------------%d---------------- \n", argc);
	return 0;
}
