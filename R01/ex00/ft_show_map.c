/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:14:03 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/17 12:26:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_show_map(int **map, int size)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < size)
	{
		while (++j < size)
		{
			ft_putchar(map[i][j] + '0');
			if (j < size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j = -1;
	}
}
