/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:00:08 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 12:09:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int i;
	int number;
	int negative;

	i = 0;
	negative = 0;
	number = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
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
