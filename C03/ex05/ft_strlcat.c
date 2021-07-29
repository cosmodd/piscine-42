/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:40:26 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/14 13:34:17 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;
	unsigned int	j;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	i = dest_size;
	j = 0;
	while (src[j] && j < size - dest_size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < size - dest_size)
	{
		dest[i] = 0;
		j++;
		i++;
	}
	return (src_size + dest_size);
}
