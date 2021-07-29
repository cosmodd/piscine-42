/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:18:19 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 18:54:37 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int n);

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%d expect %d\n", ft_sqrt(0), 0);
	printf("%d expect %d\n", ft_sqrt(1), 1);
	printf("%d expect %d\n", ft_sqrt(2), 0);
	printf("%d expect %d\n", ft_sqrt(1640045925), 0);
	printf("%d expect %d\n", ft_sqrt(2147395600), 46340);
	printf("%d expect %d\n", ft_sqrt(2147483646), 0);
	printf("%d expect %d\n", ft_sqrt(16208676), 4026);
	printf("%d expect %d\n", ft_sqrt(468585301), 0);
	printf("%d expect %d\n", ft_sqrt(349281), 591);
	printf("%d expect %d\n", ft_sqrt(1654433499), 0);
	printf("%d expect %d\n", ft_sqrt(777963664), 27892);
	printf("%d expect %d\n", ft_sqrt(818638053), 0);
	printf("%d expect %d\n", ft_sqrt(5784025), 2405);
	printf("%d expect %d\n", ft_sqrt(1157013451), 0);
	printf("%d expect %d\n", ft_sqrt(1048140625), 32375);
	printf("%d expect %d\n", ft_sqrt(1009826967), 0);
//	if (argc > 1)
//		printf("sqrt(%s) = %d", argv[1], ft_sqrt(atoi(argv[1])));
	return (0);
}
