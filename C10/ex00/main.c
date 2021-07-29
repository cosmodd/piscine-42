/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:09:10 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 10:30:18 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr_out("File name missing.", STDERR_FILENO);
		if (ac > 2)
			ft_putstr_out("Too many arguments.", STDERR_FILENO);
		return (0);
	}
	ft_display_file(av[1]);
	return (0);
}