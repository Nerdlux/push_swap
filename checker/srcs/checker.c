/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:04:55 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/09 21:10:20 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (c == '0' || c == '\n')
			break;
	}
	s_alpha->parseString = ft_split(s_alpha->string, ' ');
	return ;
}

int main(int argc, char **argv)
{
	s_struct	s_alpha;
	int			check_result;


	ft_memset(&s_alpha, 0, sizeof(s_struct));
	ft_init_struct(&s_alpha);
	check_result = ft_check_if_all_correct(&s_alpha, argv, argc);
	ft_print_checker(check_result);
	return (1);
}