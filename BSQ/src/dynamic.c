/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:58:01 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/29 16:00:16 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	copy_1st_row_col(t_map *map, char **sols)
{
	int	i;

	i = -1;
	while (++i < map->width)
		sols[0][i] = !(map->map[0][i] - 1);
	i = -1;
	while (++i < map->height)
		sols[i][0] = !(map->map[i][0] - 1);
}

void	compute(t_map *map, char **sols)
{
	int	y;
	int	x;

	y = 0;
	while (++y < map->height)
	{
		x = 0;
		while (++x < map->width)
		{
			if (map->map[y][x] == 2)
				sols[y][x] = 0;
			else
				sols[y][x] = MIN(sols[y - 1][x],
						MIN(sols[y][x - 1], sols[y - 1][x - 1])) + 1;
		}
	}
}

void	find_first(t_map *map, char **sols, t_square *square)
{
	int	y;
	int	x;

	square->pos.x = 0;
	square->pos.y = 0;
	square->size = 0;
	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
		{
			if (sols[y][x] == 0)
				continue ;
			if (sols[y][x] > square->size)
			{
				square->pos.x = x - sols[y][x] + 1;
				square->pos.y = y - sols[y][x] + 1;
				square->size = sols[y][x];
			}
		}
	}
}

void	dynamic_solve(t_map *map, t_square *square)
{
	char	**sols;
	int		y;

	y = -1;
	sols = malloc(map->height * sizeof(char *));
	while (++y < map->height)
	{
		sols[y] = malloc(map->width * sizeof(char));
	}
	y = -1;
	copy_1st_row_col(map, sols);
	compute(map, sols);
	find_first(map, sols, square);
}
