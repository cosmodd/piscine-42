/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:43:26 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/22 13:34:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(unsigned int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar('0' + n);
}

void	ft_show_tab(t_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str)
	{
		ft_putstr(tab[i].str);
		ft_putchar('\n');
		ft_putnbr(tab[i].size);
		ft_putchar('\n');
		ft_putstr(tab[i].copy);
		ft_putchar('\n');
		i++;
	}
}
