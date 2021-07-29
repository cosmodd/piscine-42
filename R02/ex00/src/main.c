/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:28:11 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 19:59:47 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	error(char	*msg)
{
	ft_putstr_out(msg, STDERR_FILENO);
	return (1);
}

int	main(int ac, char **av)
{
	t_dict	*dict;
	t_trio	*trios;
	char	*input;
	int		print_space;
	int		i;

	dict = ft_get_dict(TERN(ac >= 3, av[1], DEFAULT_DICT));
	input = TERN(ac >= 3, av[2], av[1]);
	if (!dict)
		return (error(DICT_ERR));
	i = 0;
	trios = ft_get_trios(input);
	while (trios[i].unit)
	{
		if (trios[i].hundred)
			ft_disp_hundred(dict, trios[i], &print_space);
		if (trios[i].dozen)
			ft_disp_dozen(dict, trios[i], &print_space);
		if (trios[i].unit)
			ft_disp_unit(dict, trios[i], &print_space);
		i++;
	}
	ft_free_dict(dict);
	return (0);
}
