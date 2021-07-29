/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:08:28 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 14:33:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

void	print_test(char *s1, char *s2)
{
	printf("\nft_strcmp \"%s\" | \"%s\" => %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("strcmp    \"%s\" | \"%s\" => %d\n\n", s1, s2, strcmp(s1, s2));
}

int	main(void)
{
	print_test("Cou", "Cou\200cou");
	print_test("Coucou", "Cou\200cou");
	print_test("Coucou", "Cou");
}
