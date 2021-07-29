/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:35:32 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/28 10:58:45 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	char	*ptr;

	ptr = dest;
	while (*src && n--)
		*ptr++ = *src++;
	return (dest);
}

int	index_of(char c, char *str)
{
	int	i;

	i = 0;
	while (c != str[i])
	{
		if (!str[i])
			return (-1);
		i++;
	}
	return (i);
}
