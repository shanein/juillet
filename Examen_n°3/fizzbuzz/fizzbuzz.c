/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 10:45:46 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 11:07:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
}

int	main(void)
{
	int nb;
	
	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (nb % 3 == 0)
			write(1, "fizz\n", 5);
		else if (nb % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(nb);
			ft_putchar('\n');
		}
		nb++;
	}
}
