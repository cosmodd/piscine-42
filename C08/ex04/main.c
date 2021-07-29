/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:34:27 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/20 10:19:02 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	int	i = 0;
	t_stock_str *tab = ft_strs_to_tab(argc, argv);

	while (i < argc)
	{
		printf(
			"size: %d\nstr : \"%s\" [%p]\ncopy: \"%s\" [%p]\n\n",
			tab[i].size,
			tab[i].str,
			&(tab[i].str),
			tab[i].copy,
			&(tab[i].copy)
		);
		i++;
	}
	return (0);
}