/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:28:34 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 16:36:36 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("Result : %d\n",
				ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
