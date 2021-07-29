/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaraa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 08:55:30 by mzaraa            #+#    #+#             */
/*   Updated: 2021/07/13 17:16:16 by mrattez          ###   ########.fr       */
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
			if ((px >= 1 && px < x - 1) && (py >= 1 && py < y - 1))
				ft_putchar(' ');
			else if (px == x - 1 && (py == 0 || py == y - 1) && px != 0)
				ft_putchar('C');
			else if (px == 0 && (py == 0 || py == y - 1))
				ft_putchar('A');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
		px = -1;
	}
}
