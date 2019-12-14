/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:19:42 by shanein           #+#    #+#             */
/*   Updated: 2019/07/25 11:49:55 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	number;
	int negative;

	i = 0;
	number = 0;
	negative = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	if (negative % 2 == 1)
		return (-number);
	else
		return (number);
}
