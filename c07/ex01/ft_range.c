/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:37:52 by shanein           #+#    #+#             */
/*   Updated: 2019/07/22 14:38:16 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*src;

	i = 0;
	if (min >= max)
	{
		src = NULL;
		return (src);
	}
	if (!(src = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		src[i] = min;
		i++;
		min++;
	}
	return (src);
}
