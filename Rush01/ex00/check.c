/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bounding.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:15:50 by fhamel            #+#    #+#             */
/*   Updated: 2019/07/14 18:46:46 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int		ft_check_row(int arr[4][4], int pos, int height)
{
	int x;
	int row;
	int	col;

	x = 0;
	row = pos / 4;
	col = pos % 4;
	while (x < 4)
	{
		if (arr[row][x] == height)
			return (0);
		x++;
	}
	return (1);
}

int		ft_check_col(int arr[4][4], int pos, int height)
{
	int y;
	int row;
	int	col;

	y = 0;
	row = pos / 4;
	col = pos % 4;
	while (y < 4)
	{
		if (arr[y][col] == height)
			return (0);
		y++;
	}
	return (1);
}

int		ft_check(int arr[4][4], int pos, int height)
{
	if (ft_check_row(arr, pos, height) == 0)
		return (0);
	if (ft_check_col(arr, pos, height) == 0)
		return (0);
	return (1);
}
