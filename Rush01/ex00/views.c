/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:08:02 by fhamel            #+#    #+#             */
/*   Updated: 2019/07/14 18:46:32 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

void	ft_make_views(int arr_views[4][4], char *str)
{
	int	index;
	int x;
	int	y;

	index = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (index % 2 == 0)
			{
				arr_views[y][x] = str[index] - '0';
				x++;
			}
			index++;
		}
		y++;
	}
}
