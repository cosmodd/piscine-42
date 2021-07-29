/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:16:14 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/08 14:12:49 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_two_digits(int n)
{
	char	c[2];

	c[0] = '0' + n / 10;
	c[1] = '0' + n % 10;
	write(1, c, 2);
}

void	ft_print_comb2(void)
{
	int	ns[2];

	ns[0] = 0;
	ns[1] = 0;
	while (ns[0] <= 98)
	{
		ns[1]++;
		if (ns[1] > 99)
		{
			ns[0]++;
			ns[1] = 0;
		}
		if (ns[0] < ns[1])
		{
			put_two_digits(ns[0]);
			write(1, " ", 1);
			put_two_digits(ns[1]);
			if (ns[0] != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
