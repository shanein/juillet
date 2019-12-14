/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:27:43 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 17:49:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *str;
	int i;
	int *dest;

	i = 0;
	if (start < end)
	{
		str = (int *)malloc(sizeof(int) * (end - start + 1));
		while (start <= end) 
		{
			str[i] = end;
			end--;
			i++;
		}
	}
	else if (start > end)
	{
		str = (int *)malloc(sizeof(int) * (start - end + 1));
		while (end <= start)
		{
			str[i] = end;
			end++;
			i++;
		}
	}
	else
	{
		str = (int *)malloc(sizeof(int) * (1));
		str[i] = end;
	}
	dest = NULL;
	*dest = end;
	return (dest);
}
