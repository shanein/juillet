/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:16:26 by shanein           #+#    #+#             */
/*   Updated: 2019/07/09 15:05:19 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_virg(int a, int b, int c)
{
	if (!(a == 55 && b == 56 && c == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_write(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	ft_print_virg(a, b, c);
}

void	ft_while(int a, int b, int c)
{
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				a += '0';
				b += '0';
				c += '0';
				ft_write(a, b, c);
				a -= '0';
				b -= '0';
				c -= '0';
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	ft_while(a, b, c);
}
