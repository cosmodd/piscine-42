/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:41:15 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/13 14:55:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	px;
	int	py;

	px = -1;
	py = -1;
	while (++py < y)
	{
		while (++px < x)
		{
			if ((px > 0 && px < x - 1) && (py > 0 && py < y - 1))
				ft_putchar(' ');
			else if (py == 0 && (px == 0 || px == x - 1))
				ft_putchar('A');
			else if (py == y - 1 && (px == 0 || px == x - 1))
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
		px = -1;
	}
}
