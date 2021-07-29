/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:44:39 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/13 17:58:31 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int	nb);

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(atoi(argv[1]));
	return (0);
}
