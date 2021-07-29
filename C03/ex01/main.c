/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:33:51 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/14 18:00:41 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	print_test(char *s1, char *s2, unsigned int size)
{
	printf("\nft_strncpy  \"%s\" | \"%s\" [%d] => %d", s1, s2, size, ft_strncmp(s1, s2, size));
	printf("\nstrncpy     \"%s\" | \"%s\" [%d] => %d\n", s1, s2, size, strncmp(s1, s2, size));
}

int	main(void)
{
	print_test("Coucou", "Couaou", 4);
	print_test("Bonsoir le monde", "Bonsoir les mondes", 15);
	return (0);
}
