/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:38:14 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 19:32:43 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cad;
	unsigned char	*cad1;

	cad = (unsigned char *)s1;
	cad1 = (unsigned char *)s2;
	i = 0;
	while (i < n && cad[i] == cad1[i])
		i++;
	if (i == n)
		return (0);
	if (cad[i] != cad1[i])
		return (cad[i] - cad1[i]);
	else
		return (0);
}
