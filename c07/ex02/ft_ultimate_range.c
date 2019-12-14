/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:16:26 by shanein           #+#    #+#             */
/*   Updated: 2019/07/19 12:48:06 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		*src;

	j = 0;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(src = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		src[i] = min;
		min++;
		i++;
	}
	*range = src;
	return (i);
}
