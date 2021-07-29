/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:32:18 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 10:04:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_ustrlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = ft_ustrlen(src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (src_size);
}

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	print_test(char *src, unsigned int size)
{
	char	dest[5];
	char	tdest[5];

	printf("dest[%lu] | tdest[%lu]\n\n", sizeof(dest), sizeof(tdest));
	//int	src_size = strlcpy(tdest, src, size);
	int src_size = 0;
	int	ft_size = ft_strlcpy(dest, src, size);
	printf("src : \"%s\" [%d] [%d]\n    ft_strlcpy → %s\n    strlcpy    → %s\n", src, ft_size, src_size, dest, tdest);
}

int	main(void)
{
	print_test("bateauavionvoiture", 5);
	return (0);
}

