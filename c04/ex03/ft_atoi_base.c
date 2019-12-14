/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:19:42 by shanein           #+#    #+#             */
/*   Updated: 2019/07/25 14:37:25 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return(i);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int number;
	int negative;

	i = 0;
	number = 0;
	negative = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		number *= ft_strlen(base);
		number += str[i] - 48;
		i++;
	}
	if (negative % 2 == 1)
		return (-number);
	else
		return (number);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}
