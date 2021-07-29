/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:19:53 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 15:21:43 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("Result : %d\n",
				ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
