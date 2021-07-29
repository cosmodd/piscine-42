/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:33:40 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 13:01:43 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	*tab;

	if (argc < 3)
		return (0);
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	size = ft_ultimate_range(&tab, min, max);
	int	j = 0;
	if (!tab)
		return (0);
	printf("Size : %d\n", size);
	while (j < size)
		printf("%d ", tab[j++]);
	return (0);
}
