/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:04:38 by shanein           #+#    #+#             */
/*   Updated: 2019/07/22 14:41:44 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	dest = (char*)malloc(sizeof(char) * (j + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
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

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*src;
	int			i;

	i = 0;
	if (!(src = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		src[i].size = ft_strlen(av[i]);
		src[i].str = av[i];
		src[i].copy = ft_strdup(src[i].str);
		i++;
	}
	src[i].str = 0;
	return (src);
}
