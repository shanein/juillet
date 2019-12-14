/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shanein <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 20:54:18 by shanein           #+#    #+#             */
/*   Updated: 2019/07/10 17:31:32 by shanein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	m;

	m = 0;
	i = 0;
	while (src[i] != '\0' && m < n)
	{
		dest[i] = src[i];
		i++;
		m++;
	}
	while (m < n)
	{
		dest[i] = '\0';
		i++;
		m++;
	}
	return (dest);
}
