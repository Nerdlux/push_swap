/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:55:47 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*str;

	if (!(s))
		return (0);
	i = ft_strlen(s);
	j = 0;
	str = malloc((i + 1) * sizeof(char));
	if (!(str))
		return (0);
	while (j < i)
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[i] = '\0';
	return (str);
}
