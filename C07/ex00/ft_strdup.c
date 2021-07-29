/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:41:23 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/22 08:54:22 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
