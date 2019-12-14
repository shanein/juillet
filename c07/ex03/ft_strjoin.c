/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 18:48:52 by shanein           #+#    #+#             */
/*   Updated: 2019/07/19 14:41:06 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strlen2(char **str, int size)
{
	int				i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	j = 0;
	while (size > i)
	{
		k += ft_strlen(str[i]);
		i++;
	}
	return (k);
}

char	*ft_join(int size, char **strs, char *sep, char *dest)
{
	int		d;
	int		j;
	int		i;
	int		k;

	k = 0;
	d = 0;
	while (size != 0)
	{
		j = 0;
		while (strs[k][j])
			dest[d++] = strs[k][j++];
		if (size - 1)
		{
			i = 0;
			while (sep[i])
				dest[d++] = sep[i++];
		}
		size--;
		k++;
	}
	dest[d] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size == 0)
		return (dest = malloc(1));
	if (!(dest = (char*)malloc(sizeof(char) * ((ft_strlen(sep) * (size - 1))
						+ ft_strlen2(strs, size) + 1))))
		return (NULL);
	return (ft_join(size, strs, sep, dest));
}
