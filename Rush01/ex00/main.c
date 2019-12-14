/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:25:55 by fhamel            #+#    #+#             */
/*   Updated: 2019/07/14 18:44:02 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int		main(int argc, char **argv)
{
	int	arr_views[4][4];
	int	arr[4][4];

	if (argc == 2)
	{
		if (!ft_parsing(argv[1]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		ft_make_views(arr_views, argv[1]);
		ft_init_arr(arr);
		if (!ft_backtracking(arr, arr_views, 0))
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
