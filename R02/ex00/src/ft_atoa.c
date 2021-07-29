/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 10:40:16 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 12:43:09 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_atoa(char *str)
{
	char	*out;
	int		i;

	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+'
		|| (*str == '0' && str[1] == '0'))
		str++;
	i = 0;
	while (is_numeric(str[i]))
		i++;
	out = malloc((i + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (is_numeric(str[i]))
	{
		out[i] = str[i];
		i++;
	}
	out[i] = 0;
	return (out);
}
