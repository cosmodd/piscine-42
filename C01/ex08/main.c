/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:15:59 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/10 18:09:25 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	table[5] = {5, 7, 2, 10, 48};
	int *p_table = table;
	int	i;

	//i = 5-1;
	//while (i >= 0)
	//{
	//	table[i] = i + 1;
	//	i--;
	//}
	i = 0;
	ft_sort_int_tab(p_table, 5);
	while(i < 5)
	{
		printf("%d\n", table[i]);
		i++;
	}
	return (0);
}
