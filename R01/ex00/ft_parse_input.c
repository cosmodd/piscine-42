/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:48:00 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/17 16:21:53 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str);

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	valid_input(char *str)
{
	while (*str)
	{
		if ((*str < '0' || *str > '9') && !is_space(*str))
			return (0);
		else if (is_space(*str) && is_space(str[1]))
			return (0);
		str++;
	}
	return (1);
}

int	count_nums(char *str)
{
	int	count;
	int	visited;

	count = 0;
	visited = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (!visited)
				count++;
			visited = 1;
		}
		else
			visited = 0;
		str++;
	}
	return (count);
}

int	*ft_parse_input(char *str, int *size)
{
	int	*tab;
	int	i;
	int	visited;

	if (!valid_input(str))
		return (0);
	i = 0;
	visited = 0;
	*size = count_nums(str);
	if (*size % 2 == 1)
		return (0);
	tab = malloc(*size * sizeof(int));
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (!visited)
				tab[i++] = ft_atoi(str);
			visited = 1;
		}
		else
			visited = 0;
		str++;
	}
	return (tab);
}
