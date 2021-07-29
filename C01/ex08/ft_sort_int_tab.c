/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:13:53 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/12 09:21:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

w

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_i;

	i = -1;
	while (++i < size - 1)
	{
		min_i = i;
		j = i;
		while (++j < size)
		{
			if (tab[j] < tab[min_i])
				min_i = j;
		}
		ft_swap(&tab[i], &tab[min_i]);
	}
}
