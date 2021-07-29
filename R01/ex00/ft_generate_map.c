/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:20:55 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/17 16:24:07 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_generate_map(int size)
{
	int	i;
	int	j;
	int	**map;

	map = malloc(size * sizeof(int *));
	i = -1;
	while (++i < size)
		map[i] = malloc(size * sizeof(int));
	i = -1;
	j = -1;
	while (++i < size)
	{
		while (++j < size)
			map[i][j] = 0;
		j = -1;
	}
	return (map);
}
