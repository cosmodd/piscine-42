/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:30:24 by pforesti          #+#    #+#             */
/*   Updated: 2021/07/23 09:41:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_pstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_pstrcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_pstrjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = -1;
	while (++i < size)
		len += ft_pstrlen(strs[i]);
	i = -1;
	while (++i < size - 1)
		len += ft_pstrlen(sep);
	printf("pforesti : %lu\n", sizeof(*str) * (len + 1));
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_pstrcat(str, strs[i]);
		if (i < size - 1)
			ft_pstrcat(str, sep);
	}
	str[len] = '\0';
	return (str);
}
