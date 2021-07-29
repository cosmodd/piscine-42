/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:48:26 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/12 09:36:56 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("Is printable : %d\n", ft_str_is_printable("d[@dkak94u20[a'd;d.ak. ;684"));
	printf("Is printable : %d\n", ft_str_is_printable("d['dkak94u20[a'd;d.ak.;684\1"));
	printf("Is printable : %d\n", ft_str_is_printable(""));
	return (0);
}
