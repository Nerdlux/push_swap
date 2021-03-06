/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lhextoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:56:08 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lhexlen(long unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = ULONG_MAX - n;
	}
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char	*ft_lhextoa(long unsigned int n)
{
	int					i;
	long unsigned int	nb;
	char				*num;

	nb = n;
	i = ft_lhexlen(nb);
	num = malloc((i + 1) * sizeof(char));
	if (!(num))
		return (0);
	num[i] = '\0';
	num[0] = '0';
	while (i-- >= 0)
	{
		if (nb > 0)
		{
			if (nb % 16 < 10)
				num[i] = (nb % 16) + '0';
			else
				num[i] = (nb % 16) + 87;
		}
		nb = nb / 16;
	}
	return (num);
}
