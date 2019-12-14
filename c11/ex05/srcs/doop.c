/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:48:41 by shanein           #+#    #+#             */
/*   Updated: 2019/07/23 18:48:38 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int number;
	int negative;
	int i;

	negative = 0;
	i = 0;
	number = 0;
	while (33 > str[i] || str[i] >= 127)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
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

void	ft_putnbr(int nb)
{
	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putnchar('-');
			nb = nb * (-1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putnchar(nb + '0');
		}
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
}

int		ft_doop(char *valeur1, char *valeur2, char operateur)
{
	int result;

	result = 0;
	if (operateur == '+')
		result = ft_atoi(valeur1) + ft_atoi(valeur2);
	if (operateur == '-')
		result = ft_atoi(valeur1) - ft_atoi(valeur2);
	if (operateur == '*')
		result = ft_atoi(valeur1) * ft_atoi(valeur2);
	if (operateur == '/')
		result = ft_atoi(valeur1) / ft_atoi(valeur2);
	if (operateur == '%')
		result = ft_atoi(valeur1) % ft_atoi(valeur2);
	return (result);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if ((argv[2][1]) || (!(argv[2][0] == '+' || argv[2][0] == '-'
			|| argv[2][0] == '/' || argv[2][0] == '%' || argv[2][0] == '*')))
		{
			write(1, "0\n", 2);
			return (0);
		}
		if (argv[2][0] == '/' && argv[3][0] == '0' && argv[3][1] == '\0')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (argv[2][0] == '%' && argv[3][0] == '0' && argv[3][1] == '\0')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(ft_doop(argv[1], argv[3], argv[2][0]));
		write(1, "\n", 1);
		return (0);
	}
	else
		return (0);
}
