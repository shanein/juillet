/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:31:23 by shanein           #+#    #+#             */
/*   Updated: 2019/07/25 13:59:13 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_paire(int *tab, int length, int (*f)(int, int), int i)
{
	if ((f)(tab[i], tab[i + 1]) < 0)
	{
		while (i + 1 < length)
		{
			if ((f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
		return (1);
	}
	if ((f)(tab[i], tab[i + 1]) > 0)
	{
		while (i + 1 < length)
		{
			if ((f)(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (2);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i + 1 < length)
	{
		if (ft_is_paire(tab, length, (*f), i) == 0)
			return (0);
		else if (ft_is_paire(tab, length, (*f), i) == 1)
			return (1);
		i++;
	}
	return (1);
}
