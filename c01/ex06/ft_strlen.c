/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 21:16:59 by shanein           #+#    #+#             */
/*   Updated: 2019/07/08 11:16:07 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
