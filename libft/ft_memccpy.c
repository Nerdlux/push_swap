/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:40:32 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 19:34:32 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*destin;
	unsigned char	*source;

	destin = (unsigned char *) dest;
	source = (unsigned char *) src;
	i = 0;
	while (i < size)
	{
		if (source[i] == (unsigned char)c)
		{
			destin[i] = source[i];
			return (destin + i + 1);
		}
		destin[i] = source[i];
		i++;
	}
	return (0);
}
