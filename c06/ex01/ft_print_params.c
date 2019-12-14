/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:35:50 by shanein           #+#    #+#             */
/*   Updated: 2019/07/15 15:44:19 by shanein          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int k;

	k = 1;
	while (argv[k])
	{
		ft_putstr(argv[k]);
		write(1, "\n", 1);
		k++;
	}
	argc = k;
	return (0);
}
