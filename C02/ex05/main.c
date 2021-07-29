/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:39:54 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/11 11:43:12 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("Is ucase : %d\n", ft_str_is_uppercase("DIHAODHAPWDFPAHWPFHAPO"));
	printf("Is ucase : %d\n", ft_str_is_uppercase("wertyuiopaskldfjhgcmnB"));
	printf("Is ucase : %d\n", ft_str_is_uppercase(""));
	return (0);
}
