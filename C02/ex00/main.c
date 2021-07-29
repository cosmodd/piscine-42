/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:09:11 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/13 14:32:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	print_test(char *src)
{
	char	dest[4];
	char	copy[4];

	printf("dest[%lu] | copy[%lu]\n\n", sizeof(dest), sizeof(copy));

	strcpy(copy, src);
	ft_strcpy(dest, src);
	printf("src : \"%s\"\n    ft_strcpy → %s\n    strcpy    → %s\n", src, dest, copy);
}

int	main()
{
	char *t = "cou";
	print_test(t);
	return (0);
}
