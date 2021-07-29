/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:41:05 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/14 13:36:47 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	print_test(char *src, unsigned int size)
{
	char	dest[19]  = "this is ";
	char	tdest[19] = "this is ";

	int s = strlcat(tdest, src, size);
	int ft_s = ft_strlcat(dest, src, size);
	printf(
		"\nsrc : \"%s\"  [%d] [%d]\n  ft_strlcat → %s\n  strlcat    → %s\n",
		src,
		s,
		ft_s,
		dest,
		tdest
	);
}

int	main(void)
{
	print_test("not a test", 19);
	return (0);
}
