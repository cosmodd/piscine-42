/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:51:05 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/24 18:41:49 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_trim(char *str)
{
	char	*out;
	int		i;
	int		j;

	while (is_space(*str))
		str++;
	i = 0;
	while (str[i])
		i++;
	i--;
	while (is_space(str[i]))
		i--;
	j = 0;
	out = malloc((i + 2) * sizeof(char));
	while (*str && j <= i)
		out[j++] = *str++;
	out[j] = 0;
	return (out);
}
