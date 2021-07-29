/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:04:50 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/29 17:51:22 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i])
		;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

int	size_from_tab(int size, char **strs)
{
	int	s;
	int	i;

	s = 0;
	i = -1;
	while (++i < size)
		s += ft_strlen(strs[i]);
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		len;
	int		i;

	len = size_from_tab(size, strs) + (size - 1) * ft_strlen(sep);
	out = malloc(((!!size) * len + 1) * sizeof(char));
	printf("%d\n", ((!!size) * len + 1));
	if (!out)
		return (NULL);
	out[0] = 0;
	i = -1;
	while (++i < size)
	{
		ft_strcat(out, strs[i]);
		if (i < size - 1)
			ft_strcat(out, sep);
	}
	out[len] = 0;
	return (out);
}
