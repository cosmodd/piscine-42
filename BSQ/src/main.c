/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:00:07 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/29 16:31:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	chartablelen(char **table)
{
	int	c;

	c = 0;
	while (table[c])
		c++;
	return (c);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2 && !show_map(NULL))
		ft_putstr(MAP_ERR);
	else
		while (++i < ac)
			if (!show_map(av[i]))
				ft_putstr(MAP_ERR);
	return (0);
}
