/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:48:04 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/22 13:34:53 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "stdlib.h"

int	ft_strlen(char *str)
{
	int	c;

	c = -1;
	while (str[++c])
		;
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

t_stock_str	*ft_strs_to_tab(int size, char **strs)
{
	int			i;
	t_stock_str	*out;

	i = 0;
	out = malloc((size + 1) * sizeof(t_stock_str));
	if (!out)
		return (0);
	while (i < size)
	{
		out[i].size = ft_strlen(strs[i]);
		out[i].str = strs[i];
		out[i].copy = ft_strdup(strs[i]);
		i++;
	}
	out[size].size = 0;
	out[size].str = 0;
	out[size].copy = 0;
	return (out);
}
