/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:47:46 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/08 19:43:07 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char *s, char c, size_t slen)
{
	size_t		words;
	size_t		i;

	if (slen == 0)
		return (0);
	words = 1;
	i = 0;
	while (i < slen)
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char		**getword(char *s, char c, size_t slen, size_t wcount)
{
	char		**result;
	char		**res;
	size_t		ini;
	size_t		end;

	ini = 0;
	end = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	res = result;
	while (end < slen)
		if (s[end] == c || end + 1 == slen)
		{
			end = (end + 1 == slen ? slen : end);
			if (!(*result = ft_substr(s, ini, (end - ini))))
				return (NULL);
			result++;
			while (s[end] == c)
				end++;
			ini = end;
		}
		else
			end++;
	*result = NULL;
	return (res);
}

char			**ft_split(char *s, char c)
{
	size_t		j;
	size_t		i;
	char		**result;
	char		*car;

	car = malloc(2 * sizeof(char));
	car[0] = (char)c;
	car[1] = '\0';
	s = ft_strtrim(s, car);
	if (!s)
		return (NULL);
	free(car);
	j = ft_strlen(s);
	i = wordcount(s, c, j);
	result = getword(s, c, j, i);
	free(s);
	return (result);
}
