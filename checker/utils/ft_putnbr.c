/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 17:46:42 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_putnbr(int n)
{
	int	x;

	x = 0;
	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n * (-1));
	}
	else
	{
		if (n >= 10)
			ft_putnbr((n / 10));
		x = (n % 10) + '0';
		write(1, &x, 1);
	}
}
