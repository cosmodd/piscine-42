/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:34:27 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 09:49:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "stdio.h"

void	ft_show_tab(t_stock_str *tab);

int	main(int argc, char **argv)
{
	t_stock_str *tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	return (0);
}