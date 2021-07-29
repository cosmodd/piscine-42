/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:41:42 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 12:06:21 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
