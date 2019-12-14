/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:59:43 by shanein           #+#    #+#             */
/*   Updated: 2019/07/23 11:32:48 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *dest;

	dest = (int*)malloc(sizeof(int) * (length));
	i = 0;
	while (i < length)
	{
		dest[i] = (f)(tab[i]);
		i++;
	}
	return (dest);
}
