/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:33:25 by shanein           #+#    #+#             */
/*   Updated: 2019/07/24 18:48:32 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int k;

	k = 0;
	while (tab[k])
	{
		if (f(tab[k]))
			return (1);
		k++;
	}
	return (0);
}
