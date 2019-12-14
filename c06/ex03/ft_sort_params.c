/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:15:44 by shanein           #+#    #+#             */
/*   Updated: 2019/07/23 21:47:40 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] && s2[j])
	{
		j++;
	}
	return (s1[j] - s2[j]);
}

int		ft_sort_param(char **list, int size)
{
	int		s;
	int		i;
	char	*tmp;

	i = 0;
	s = 0;
	while (!s)
	{
		i = 0;
		s = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				s = 0;
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
			i++;
		}
	}
	return (**list);
}

int		main(int argc, char **argv)
{
	int k;

	k = 1;
	ft_sort_param(argv, argc);
	while (argv[k] && argc > 1)
	{
		ft_putstr(argv[k]);
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
