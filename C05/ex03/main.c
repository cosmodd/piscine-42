/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 08:42:36 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/20 16:49:10 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int n, int power);

int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("Result : %d\n",
				ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
