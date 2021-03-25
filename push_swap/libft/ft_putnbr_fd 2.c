/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 17:30:22 by jruiz-ro          #+#    #+#             */
/*   Updated: 2020/02/01 20:48:24 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	s;

	s = 0;
	if (n >= 0)
		s = n;
	if (n < 0)
	{
		s = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (s > 9)
		ft_putnbr_fd(s / 10, fd);
	ft_putchar_fd((s % 10) + '0', fd);
}
