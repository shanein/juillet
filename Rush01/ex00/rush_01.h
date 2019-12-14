/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:40:10 by fhamel            #+#    #+#             */
/*   Updated: 2019/07/14 18:48:18 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>
# include <stdlib.h>

int		ft_check_row(int arr[4][4], int pos, int height);
int		ft_check_col(int arr[4][4], int pos, int height);
int		ft_check(int arr[4][4], int pos, int height);
void	ft_print_arr(int arr[4][4]);
int		ft_backtracking (int arr[4][4], int arr_views[4][4], int pos);
int		ft_val_col_up(int arr[4][4], int arr_views[4][4], int col);
int		ft_val_col_down(int arr[4][4], int arr_views[4][4], int col);
int		ft_val_row_left(int arr[4][4], int arr_views[4][4], int row);
int		ft_val_row_right(int arr[4][4], int arr_views[4][4], int row);
int		ft_is_valid(int arr[4][4], int arr_views[4][4]);
void	ft_make_views(int arr_views[4][4], char *str);
void	ft_init_arr(int arr[4][4]);
void	ft_putchar(char c);
int		ft_parsing(char *str);

#endif
