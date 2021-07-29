/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:40:58 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 20:34:31 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int n);

void	print_all_primes(void)
{
	int	i = 1;
	int	j = 0;
	int	to = 7919;

	while (i <= to)
	{
		if (ft_is_prime(i))
		{
			printf("%d", i);
			if (i < to)
				printf("\n");
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("is_prime(%s) = %d",
			argv[1], ft_is_prime(atoi(argv[1])));
	else
		print_all_primes();
	return (0);
}
