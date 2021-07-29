/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:44:09 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 13:52:36 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*dest;

	i = -1;
	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[++i] && i < n)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = -1;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_format_num(char	*str)
{
	char	*out;
	int		to_add;
	int		i;

	i = 0;
	to_add = (3 - (ft_strlen(str) % 3)) % 3;
	out = malloc((ft_strlen(str) + to_add + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (to_add--)
		out[i++] = '_';
	out[i] = 0;
	ft_strcat(out, str);
	return (out);
}
