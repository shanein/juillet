/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:45:14 by shanein           #+#    #+#             */
/*   Updated: 2019/07/15 11:36:55 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == -1 && nb == 1)
		return (nb);
	if (1 <= power)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
