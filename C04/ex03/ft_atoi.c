/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:04:14 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 09:32:16 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++) - '0';
	return (sign * num);
}
