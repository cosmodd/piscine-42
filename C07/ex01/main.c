/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:01:40 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 12:03:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	int	i = 0;
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	*tab = ft_range(min, max);
	int	size = max - min;

	if (!tab)
		return (0);
	while (i < size)
		printf("%d ", tab[i++]);
	return (0);
}