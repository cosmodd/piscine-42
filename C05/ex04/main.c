/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 08:48:39 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/16 08:50:05 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("Result : %d\n",
				ft_fibonacci(atoi(argv[1])));
	return (0);
}
