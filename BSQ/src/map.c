/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:55:47 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/29 16:31:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	validate_first_line(t_map *map, char *line)
{
	int		i;
	int		len;
	int		num;

	len = ft_strlen(line);
	if (len < 4)
		return (0);
	num = 0;
	while (is_numeric(*line) && len-- > 3)
		num = num * 10 + (*line++ - '0');
	if (!num || num != map->height)
		return (0);
	i = 0;
	while (*line)
	{
		if (!is_printable(*line))
			return (0);
		map->fill[i++] = *line++;
	}
	if (map->fill[0] == map->fill[1] || map->fill[1] == map->fill[2]
		|| map->fill[0] == map->fill[2])
		return (0);
	map->fill[i] = 0;
	return (1);
}

int	validate_map_chars(t_map *map)
{
	int	i;
	int	j;

	i = -1;
	while (map->map[++i])
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (index_of(map->map[i][j], map->fill) > 1)
				return (0);
			map->map[i][j] = index_of(map->map[i][j], map->fill) + 1;
		}
	}
	return (1);
}

int	has_empty_lines(char *content)
{
	int	i;

	i = 0;
	while (content[++i])
		if (content[i - 1] == '\n' && content[i] == '\n')
			return (1);
	return (0);
}

t_map	get_map(char *path)
{
	t_map	map;
	int		i;
	char	*file;
	char	**file_lines;

	i = 0;
	map.map = NULL;
	file = load_file(path);
	file_lines = ft_split(file, "\n");
	if (has_empty_lines(file) || !file_lines)
		return (map);
	map.height = chartablelen(file_lines) - 1;
	map.width = ft_strlen(file_lines[1]);
	if (map.height < 1 || map.width < 1
		|| !validate_first_line(&map, file_lines[0]))
		return (map);
	file_lines++;
	i = 0;
	while (file_lines[++i])
		if (ft_strlen(file_lines[i]) != map.width)
			return (map);
	map.map = file_lines;
	if (!validate_map_chars(&map))
		map.map = NULL;
	return (map);
}

int	show_map(char *path)
{
	t_square	sqr;
	t_map		map;
	int			y;
	int			x;

	y = -1;
	map = get_map(path);
	if (!map.map)
		return (0);
	dynamic_solve(&map, &sqr);
	while (map.map[++y])
	{
		x = -1;
		while (map.map[y][++x])
		{
			if ((x >= sqr.pos.x && x < sqr.pos.x + sqr.size)
				&& (y >= sqr.pos.y && y < sqr.pos.y + sqr.size))
				ft_putchar(map.fill[2]);
			else
				ft_putchar(map.fill[map.map[y][x] - 1]);
		}
		ft_putchar('\n');
	}
	free(map.map - 1);
	return (1);
}
