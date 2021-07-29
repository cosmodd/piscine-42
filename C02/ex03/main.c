/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:29:51 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/11 11:31:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("Is num : %d\n", ft_str_is_numeric("0123456789"));
	printf("Is num : %d\n", ft_str_is_numeric("6484634546835a"));
	return (0);
}
