/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:37:03 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/09 11:42:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 7;
	int b = 15;

	// Pointeurs
	int *p_a = &a;
	int *p_b = &b;

	printf("a : %d\nb : %d\n\n", a, b);
	ft_swap(p_a, p_b);
	printf("a : %d\nb : %d\n\n", a, b);
}
