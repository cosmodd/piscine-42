/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:17:00 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 13:20:30 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int n);

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("Result : %d",
				ft_iterative_factorial(atoi(argv[1])));
	return(0);
}
