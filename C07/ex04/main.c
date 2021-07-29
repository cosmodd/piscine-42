/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:12:16 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/21 09:54:30 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *from_base, char *to_base);

int	main(int ac, char **av)
{
	if (ac < 4) return (0);
	char	*input = av[1];
	char	*from_base = av[2];
	char	*to_base = av[3];

	printf(" Input: \"%s\"\n  From: \"%s\"\n    To: \"%s\"\nResult: \"%s\"\n",
		input, from_base, to_base, ft_convert_base(input, from_base, to_base));
	return (0);
}