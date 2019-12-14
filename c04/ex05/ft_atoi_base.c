/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:19:42 by shanein           #+#    #+#             */
/*   Updated: 2019/07/15 10:44:27 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int negative;
	int nbr_final[100];

	i = 0;
	number = 0;
	negative = 0;
	if (check_base(base))
	{
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
		i = 0;
		while (number)
		{
			nbr_final[i] = number % ft_strlen(base);
			number /= ft_strlen(base);
			i++;
		}
		if (negative % 2 == 1)
			return (-base[nbr_final[100]]);
		else
			return (-base[nbr_final[100]]);
	}
	return (0);
}
