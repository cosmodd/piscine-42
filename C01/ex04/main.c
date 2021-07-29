/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:20:59 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/09 19:24:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int*a,int*b);

int	main(void)
{
	int a = 47;
	int b = 8;
	int *p_a = &a;
	int *p_b = &b;
	ft_ultimate_div_mod(p_a, p_b);
	printf("d:%d m:%d", a, b);
}
