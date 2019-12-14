/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:27:01 by fhamel            #+#    #+#             */
/*   Updated: 2019/07/14 18:47:09 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int		ft_val_col_up(int arr[4][4], int arr_views[4][4], int col)
{
	int towers_seen;
	int tmp;
	int y;

	towers_seen = 0;
	tmp = 0;
	y = 0;
	while (y < 4)
	{
		if (arr[y][col] > tmp)
		{
			towers_seen++;
			tmp = arr[y][col];
		}
		y++;
	}
	if (towers_seen == arr_views[0][col])
		return (1);
	return (0);
}

int		ft_val_col_down(int arr[4][4], int arr_views[4][4], int col)
{
	int towers_seen;
	int tmp;
	int y;

	towers_seen = 0;
	tmp = 0;
	y = 3;
	while (y >= 0)
	{
		if (arr[y][col] > tmp)
		{
			towers_seen++;
			tmp = arr[y][col];
		}
		y--;
	}
	if (towers_seen == arr_views[1][col])
		return (1);
	return (0);
}

int		ft_val_row_left(int arr[4][4], int arr_views[4][4], int row)
{
	int towers_seen;
	int tmp;
	int x;

	towers_seen = 0;
	tmp = 0;
	x = 0;
	while (x < 4)
	{
		if (arr[row][x] > tmp)
		{
			towers_seen++;
			tmp = arr[row][x];
		}
		x++;
	}
	if (towers_seen == arr_views[2][row])
		return (1);
	return (0);
}

int		ft_val_row_right(int arr[4][4], int arr_views[4][4], int row)
{
	int towers_seen;
	int tmp;
	int x;

	towers_seen = 0;
	tmp = 0;
	x = 3;
	while (x >= 0)
	{
		if (arr[row][x] > tmp)
		{
			towers_seen++;
			tmp = arr[row][x];
		}
		x--;
	}
	if (towers_seen == arr_views[3][row])
		return (1);
	return (0);
}

int		ft_is_valid(int arr[4][4], int arr_views[4][4])
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		if (!ft_val_col_up(arr, arr_views, x) ||
		!ft_val_col_down(arr, arr_views, x))
			return (0);
		x++;
	}
	y = 0;
	while (y < 4)
	{
		if (!ft_val_row_left(arr, arr_views, y) ||
		!ft_val_row_right(arr, arr_views, y))
			return (0);
		y++;
	}
	return (1);
}
