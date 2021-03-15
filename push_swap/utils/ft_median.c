/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:02:05 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/15 15:16:17 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

int	ft_median(int *list)
{
	int i;
	int result;

	i = 0;
	while(list[i] != 0)
		i++;
	if(i % 2 == 0)
		result = i/2;
	else
		result = (i + 1)/2;
	return(list[result]);
}
