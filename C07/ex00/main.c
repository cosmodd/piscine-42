/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:54:18 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 09:59:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int main(int argc, char const **argv)
{
	if (argc < 2) return (0);
	char	*src = (char *) argv[1];
	char	*cpy = ft_strdup(src);
	printf("Source : \"%s\" at [%p]\nCopy   : \"%s\" at [%p]\n", src, &src, cpy, &cpy);
	return (0);
}
