/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_all_correct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 19:58:25 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	*ft_insertion_sort(int arr[], int argc)
{
	int	i;
	int	j;
	int	tmp;

	if (!arr)
		return (0);
	i = 0;
	j = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
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
	return (arr);
}

int	ft_check_if_number(char *arg, s_struct *s_alpha)
{
	(void)s_alpha;
	if (ft_isinteger(arg) == 0)
		return (1);
	return (0);
}

int	ft_check_if_all_correct(s_struct *s_alpha, char **argv, int argc)
{
	int	count;
	int	i;

	count = 1;
	while (count < argc)
	{
		if (ft_check_if_number(argv[count], s_alpha) == 1)
			return (1);
		count++;
	}
	s_alpha->all_int = malloc(sizeof(int) * (argc - 1));
	s_alpha->all_ord_int = malloc(sizeof(int) * (argc - 1));
	count = 1;
	i = 0;
	while (count < argc)
	{
		s_alpha->all_int[i] = ft_atoi(argv[count]);
		s_alpha->all_ord_int[i] = ft_atoi(argv[count]);
		i++;
		count++;
	}
	ft_insertion_sort(s_alpha->all_ord_int, argc - 1);
	return (0);
}

int	ft_get_int(t_list *a)
{
	int	res;

	res = 0;
	if (!a)
		error_exit("No values to get int from");
	res = ft_ptoint(a->content);
	return (res);
}
