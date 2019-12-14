/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:03:01 by shanein           #+#    #+#             */
/*   Updated: 2019/07/09 18:33:20 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_wh(int j, int tmp, int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		i++;
		j = 1;
		while (j < size)
		{
			j++;
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				j--;
			}
		}
	}
	tmp = tab[0];
	i = 0;
	while (i < size)
		i++;
	tab[i] = tab[i + 1];
	tab[size - 1] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int j;

	j = 0;
	tmp = 0;
	ft_wh(0, 0, tab, size);
}
