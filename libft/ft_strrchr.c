/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:01:26 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 19:31:24 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	car;

	i = 0;
	str = (char *) s;
	car = (char) c;
	while (str[i] != '\0')
		i++;
	while (str[i] != car && i > 0)
		i--;
	if (str[i] == car)
		return (str + i);
	return (NULL);
}
