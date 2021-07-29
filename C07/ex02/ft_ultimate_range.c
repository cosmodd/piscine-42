/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:27:57 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 13:00:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc((max - min + 1) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
