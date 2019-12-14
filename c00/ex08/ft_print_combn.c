/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:56:19 by shanein           #+#    #+#             */
/*   Updated: 2019/07/08 15:42:56 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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


int		ft_print_write(nombre)
{
	ft_putnbr(nombre);
	write(1, ", ", 2);
	return nombre;
}

void	ft_print_combn(int n)
{
	int nombre;
	nombre = 0;

	if (n == 1)
	{
		while(nombre < 9)
		{
			ft_print_write(nombre);
			nombre++;
		}
	}
	if (n == 2)
	{
		while(nombre < 89)
		{
			ft_print_write(nombre);
			nombre++;
		}
	}
}			JE ME SUIS PEUT ETRE EMBROUILLE ;-}
