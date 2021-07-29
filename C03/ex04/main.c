/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:01:58 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 14:32:28 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	print_test(char *str, char *to_find)
{
	printf(
		"str     = \"%s\"\nto_find = \"%s\"\n\n  ft_strstr | %s\n  strstr    | %s\n",
		str,
		to_find,
		ft_strstr(str, to_find),
		strstr(str, to_find)
	);
}

int	main(void)
{
	print_test("Lorem ipsum dolor sit amet.", "");
	return (0);
}
