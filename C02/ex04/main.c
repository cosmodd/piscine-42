/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:35:12 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/11 11:37:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("Is lowercase : %d\n", ft_str_is_lowercase("wertyuiopaskldfjhgcmnb"));
	printf("Is lowercase : %d\n", ft_str_is_lowercase("wertyuiopaskldfjhgcmnB"));
	printf("Is lowercase : %d\n", ft_str_is_lowercase(""));
	return (0);
}
