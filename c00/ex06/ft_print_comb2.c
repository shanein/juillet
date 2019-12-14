/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 12:51:43 by shanein           #+#    #+#             */
/*   Updated: 2019/07/07 13:24:57 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writezero(int a)
{
	if (a <= 9)
	{
		write(1, "0", 1);
	}
}

void	ft_putnchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
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

void	ft_write_virg(int a, int b)
{
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 01;
	while (b < 100 && a != b)
	{
		ft_writezero(a);
		ft_putnbr(a);
		write(1, " ", 1);
		if (b <= 9)
		{
			write(1, "0", 1);
		}
		ft_putnbr(b);
		ft_write_virg(a, b);
		b++;
		if (b == 100)
		{
			a++;
			b = a + 1;
		}
	}
}
