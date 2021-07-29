/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:15:47 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/21 14:10:09 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	char **splitted = ft_split(argv[1], argv[2]);
	if (!splitted)
		return (0);
	while (*splitted)
		printf(
			"\"%s\"\n",
			*splitted++
			);
	return (0);
}
