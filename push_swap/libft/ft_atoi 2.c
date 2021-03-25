/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:49:12 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 19:00:18 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	long int	k;
	long int	r;

	i = 0;
	k = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			k = -k;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = ((r * 10) + (str[i] - '0') * k);
		i++;
	}
	return ((int)r);
}
