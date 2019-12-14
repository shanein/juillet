/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:12:23 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 12:24:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_lastword(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] > 33 && str[i + 1] < 127)
			j = i + 1;
		i++;
	}
	while (str[j])
	{
		if (str[j] > 33 && str[j] < 127)
			ft_putchar(str[j]);
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_lastword(argv[1]);
	ft_putchar('\n');
}
