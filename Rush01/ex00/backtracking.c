/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:09:35 by fhamel            #+#    #+#             */
/*   Updated: 2019/07/14 18:47:04 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

void	ft_print_arr(int arr[4][4])
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(arr[y][x] + '0');
			if (x != 3)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		ft_backtracking(int arr[4][4], int arr_views[4][4], int pos)
{
	int height;

	if (pos == 16 && ft_is_valid(arr, arr_views))
	{
		ft_print_arr(arr);
		return (1);
	}
	else if (pos == 16 && !ft_is_valid(arr, arr_views))
		return (0);
	height = 1;
	while (height <= 4)
	{
		if (ft_check(arr, pos, height))
		{
			arr[pos / 4][pos % 4] = height;
			if (!ft_backtracking(arr, arr_views, pos + 1))
				arr[pos / 4][pos % 4] = 0;
			else
				return (1);
		}
		height++;
	}
	return (0);
}
