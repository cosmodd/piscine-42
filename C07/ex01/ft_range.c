/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:01:34 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 11:58:56 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	j;

	if (min >= max)
		return (0);
	tab = malloc((max - min + 1) * sizeof(int));
	j = 0;
	while (min < max)
		tab[j++] = min++;
	return (tab);
}
