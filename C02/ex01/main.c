/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:42:02 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/14 14:36:58 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	print_test(char *src, int size)
{
	char	dest[20] = "coucou tout le monde";
	char	copy[20] = "coucou tout le monde";

	printf("dest[%lu] | copy[%lu]\n\n", sizeof(dest), sizeof(copy));
	strncpy(copy, src, size);
	ft_strncpy(dest, src, size);
	printf("src : \"%s\"\n    ft_strncpy → %s\n    strncpy    → %s\n", src, dest, copy);
}

int	main(void)
{
	char t[20] = "COU\0COU";
	print_test(t, 4);
	return (0);
}
