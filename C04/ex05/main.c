/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:50:48 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/19 10:40:37 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("base : %s\ninput: %s\nres  : %d\n",
				argv[2],
				argv[1],
				ft_atoi_base(argv[1], argv[2]));
	return (0);
}
