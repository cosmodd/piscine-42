/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 08:12:23 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/10 15:15:18 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	table[20];
	int *p_table = table;
	int	i;

	i = 0;
	while (i < 20)
	{
		table[i] = i + 1;
		i++;
	}
	i = 0;
	ft_rev_int_tab(p_table, 20);
	while(i < 20)
	{
		printf("%d\n", table[i]);
		i++;
	}
	return (0);
}
