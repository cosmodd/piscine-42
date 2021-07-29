/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:04:35 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/16 10:06:31 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int n);

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("next_prime(%s) = %d",
				argv[1], ft_find_next_prime(atoi(argv[1])));
	return (0);
}
