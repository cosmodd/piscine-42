/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:45:15 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/09 11:51:30 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div = 0;
	int mod = 0;
	int	*p_div = &div;
	int	*p_mod = &mod;

	ft_div_mod(47, 8, p_div, p_mod);
	printf("d:%d  m:%d", div, mod);
}
