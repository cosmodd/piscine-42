/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 09:58:27 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/17 16:11:57 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		**ft_generate_map(int size);
void	ft_show_map(int **map, int size);
int		*ft_parse_input(char *str, int *size);

int	main(int argc, char **argv)
{
	int	i = 0;
	int	size;
	int	*clues;
	int	**map;

	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	clues = ft_parse_input(argv[1], &size);
	if ((size / 4) < 1 || clues == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	map = ft_generate_map(size / 4);
	while (i < size)
		printf("%d ", clues[i++]);
	ft_show_map(map, size / 4);
	// TODO: validate input argv[1] (only spaces and 0 < numbers < 5)
	// TODO: split input and parse ints (ft_split && ft_atoi)
	return (0);
}
