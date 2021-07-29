/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:26:38 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/14 17:14:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_alpha(char c)
{
	return (is_upcase(c) || is_lowcase(c));
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		i;
	int		w;

	i = -1;
	w = -1;
	while (str[++i] != '\0')
	{
		c = str[i];
		if (is_alpha(c) || is_numeric(c))
			w++;
		else
			w = -1;
		str[i] -= ((w == 0 && is_lowcase(c)) * 32);
		str[i] += (w > 0 && is_upcase(c)) * 32;
	}
	return (str);
}
