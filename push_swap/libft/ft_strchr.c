/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:14:47 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 19:32:17 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cad;
	char	car;

	i = 0;
	cad = (char *)s;
	car = (char)c;
	while (cad[i] != car && cad[i] != '\0')
		i++;
	if (cad[i] == car)
		return (cad + i);
	return (0);
}
