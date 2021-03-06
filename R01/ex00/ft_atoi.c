/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:40:06 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/17 10:40:18 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - '0');
	return (num);
}
