/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:45:27 by shanein           #+#    #+#             */
/*   Updated: 2019/07/24 12:51:02 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_index(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		a;
	int		b;
	char	**split;

	i = 0;
	b = 0;
	if (!(split = (char**)malloc(sizeof(char *) * 256)))
		return (0);
	while (check_index(str[i], charset) == 1)
		i++;
	while (str[i])
	{
		a = 0;
		if (!(split[b] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] && check_index(str[i], charset) == 0)
			split[b][a++] = str[i++];
		while (str[i] && check_index(str[i], charset) == 1)
			i++;
		split[b][a] = '\0';
		b = b + 1;
	}
	split[b] = NULL;
	return (split);
}
