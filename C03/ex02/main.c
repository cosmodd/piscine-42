/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:46:04 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/12 11:12:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

void	print_test(char *src)
{
	char	dest[40] = "ceci est un";
	char	tdest[40] = "ceci est un";
	
	strcat(tdest, src);
	ft_strcat(dest, src);
	printf("ft_strcat => %s\nstrcat    => %s\n", dest, tdest);
}

int	main(void)
{	
	print_test(" test");
	print_test("DOAIWHDOA\0IWFOAHIW");
	return (0);
}
