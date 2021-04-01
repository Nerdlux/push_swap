/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 19:59:27 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap/push_swap.h"
#include "../checker.h"

void ft_print_checker(int x)
{
	ft_putstr(ANSI_COLOR_RED);
	if (x == 1)
		ft_putstr("KO\n");
	else
	{
		ft_putstr(ANSI_COLOR_MAGENTA);
		ft_putstr("OK\n");
	}
	ft_putstr(ANSI_COLOR_RESET);
}

void ft_init_struct(s_struct *s_alpha)
{
	int c;
	int	i;

	i = 0;
	while (read(0, &c, 1) > 0)
	{
		s_alpha->string[i] = c;
		i++;
		if (c == '0')
			break;
	}
	s_alpha->parseString = ft_split(s_alpha->string, '\n');
	return ;
}

int ft_ptoint(int *p)
{
	int n;

	n = *p;
	return(n);
}

void	print_list(t_list *a, t_list *b)
{
	char	out[100];
	int		separator;

	separator = 50;
	ft_memset(out, '-', separator);
	out[separator] = 0;
	printf("%s\n", out);
	while (a != NULL || b != NULL)
	{
		if (a != NULL)
		{
			printf("%d", ft_ptoint(a->content));
			a = a->next;
		}
		printf("\t\t\t\t\t");
		if (b != NULL)
		{
			printf("%d", ft_ptoint(b->content));
			b = b->next;
		}
		printf("\n");
	}
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
	s_struct	s_alpha;

	int f;
	char *f2;

	f = argc;
	f2 = *argv;


	ft_memset(&s_alpha, 0, sizeof(s_struct));
	ft_init_struct(&s_alpha);

	ft_check_if_all_correct(&s_alpha, argv, argc);
	i = 0;
	while (s_alpha.parseString[i] != 0)
	{
		printf(">>>%zu<<< \n", ft_strlen(s_alpha.parseString[i]) - 1);
		ft_caller(ft_trim(s_alpha.parseString[i]), &a, &b, ft_strlen(ft_trim(s_alpha.parseString[i])));
		i++;
	}
	i = 0;
	while (s_alpha.all_ord_int[i])
		{
			if(s_alpha.all_ord_int[i] != ft_get_int(a))
				{
					printf("KO\n");
					return (1);
				}
			i++;
			a = a->next;
		}
	printf("OK\n");
return (0);
}
