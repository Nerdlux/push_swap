/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:22:31 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/09 20:26:08 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}

int			ft_isinteger(char *str)
{
	char	*trimmed;
	char	*i;
	int		is_int;

	if (!str || *str == '\0' || !(trimmed = ft_trim(str)))
		return (0);
	i = trimmed;
	while (ft_isdigit(*i))
		i++;
	is_int = (*i == '\0' ? 1 : 0);
	free(trimmed);
	return (is_int);
}
