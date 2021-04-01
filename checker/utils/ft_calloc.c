/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/01 17:27:52 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_bzero(void *s, size_t n)
{
	char	*cs;
	size_t	i;

	cs = (char *)s;
	i = 0;
	while (i < n)
	{
		cs[i] = 0;
		i++;
	}
}

int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*r;

	r = malloc(nmemb * size);
	if (r != 0)
		ft_bzero(r, (nmemb * size));
	return (r);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cd;
	char		*cs;

	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	cd = (char *)dest;
	cs = (char *)src;
	while (i < n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (dest);
}

char	*ft_trim(char *str)
{
	size_t		start;
	size_t		end;
	char		*trimmed;

	end = ft_strlen(str);
	if (!str || !end)
		return (0);
	start = 0;
	while (ft_isspace(*(str + start)))
		start++;
	end--;
	while (start < end && ft_isspace(*(str + end)))
		end--;
	if (start > end)
		return (0);
	trimmed = ft_calloc(end - start + 2, sizeof(char));
	if (!trimmed)
		return (0);
	ft_memcpy(trimmed, str + start, (end - start + 1));
	return (trimmed);
}
