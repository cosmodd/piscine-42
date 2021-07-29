/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:36:46 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 10:05:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	print_test(char *src, unsigned int size)
{
	char	dest[5];
	char	tdest[5];

	printf("dest[%lu] | tdest[%lu]\n\n", sizeof(dest), sizeof(tdest));
	int	src_size = strlcpy(tdest, src, size);
	int	ft_size = ft_strlcpy(dest, src, size);
	printf("src : \"%s\" [%d] [%d]\n    ft_strlcpy → %s\n    strlcpy    → %s\n", src, ft_size, src_size, dest, tdest);
}

int	main(void)
{
	print_test("bateauavionvoiture", 8);
	return (0);
}
