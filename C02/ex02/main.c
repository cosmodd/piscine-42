/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:14:55 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/11 11:18:14 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("Coucou123456"));
	printf("%d\n", ft_str_is_alpha("Coucou"));
	return (0);
}
