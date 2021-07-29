/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:04:37 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/14 08:42:59 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("ft_atoi => %d\natoi    => %d\n",
				ft_atoi(argv[1]),
				atoi(argv[1]));
	return (0);
}
