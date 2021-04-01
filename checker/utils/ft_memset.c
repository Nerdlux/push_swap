/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 17:06:06 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*uc;

	uc = (unsigned char *)b;
	i = 0;
	while (len > 0 && i < len)
	{
		uc[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
