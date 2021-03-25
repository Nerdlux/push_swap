/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_all_correct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 19:25:09 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/10 21:06:46 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void insertionSort(int arr[], int n)
{
    int i;
	int	key;
	int	j;

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

int ft_check_if_number(char *arg, s_struct *s_alpha)
{
	(void)s_alpha;
	if (ft_isinteger(arg) == 0)
		return (1);
	return (0);
}

int ft_check_if_all_correct(s_struct *s_alpha, char **argv, int argc)
{
	int	count;
	int i;

	count = 1;
	while (count < argc)
	{
		if (ft_check_if_number(argv[count], s_alpha) == 1)
			return (1);
		count++;
	}
	// Aqui necesito la interpretación de comandos del push_swap leyendo s_alpha_parseString.

	// Y luego de eso necesito una comparativa con una array ordenada correctamente.
	s_alpha->all_int = malloc(sizeof(int) * (argc - 1));
	count = 1;
	i = 0;
	while(count < argc)
	{
		s_alpha->all_int[i] = ft_atoi(argv[count]);
		i++;
		count++;
	}
	// Crear una funcion de ordenación para s_alpha->all_int
	insertionSort(s_alpha->all_int, argc - 1);

	// lo siguiente es test
	count = 1;
	i = 0;
	while (count < argc)
	{
		ft_putstr(ANSI_COLOR_CYAN);
		ft_putnbr(s_alpha->all_int[i]);
		ft_putstr("\n");
		i++;
		count++;
	}
	ft_putstr(ANSI_COLOR_RESET);

	//hasta aqui
	return (0);
}
