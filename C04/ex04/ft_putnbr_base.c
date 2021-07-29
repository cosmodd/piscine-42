/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:41:08 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/19 10:58:48 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(unsigned int n, char *base, unsigned int bsize)
{
	if (n >= bsize)
		ft_print_num(n / bsize, base, bsize);
	ft_putchar(base[n % bsize]);
}

int	is_not_valid(char c, char *base)
{
	int	ct;

	ct = 0;
	while (*base)
		if (*base++ == c)
			ct++;
	return (c == '+' || c == '-' || c == ' '
		|| (c >= 9 && c <= 13) || ct > 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bsize;

	bsize = -1;
	while (base[++bsize])
		if (is_not_valid(base[bsize], base))
			return ;
	if (bsize < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print_num(-nbr, base, bsize);
	}
	else
		ft_print_num(nbr, base, bsize);
}
