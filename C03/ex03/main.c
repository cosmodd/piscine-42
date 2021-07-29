/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:10:53 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/13 11:11:11 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int size);

void	print_test(char *src, unsigned int size)
{
	char	dest[150] = "ceci est un";
	char	tdest[150] = "ceci est un";
	
	strncat(tdest, src, size);
	ft_strncat(dest, src, size);
	printf("ft_strcat => %s\nstrcat    => %s\n", dest, tdest);
}

int	main(void)
{
	print_test(" autre test", 50);
	print_test(" test de grande envergure", 20);
	return (0);
}
