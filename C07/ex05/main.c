/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:15:47 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 09:25:17 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

void	show_tab(char **tab)
{
	int	i;

	i = -1;
	printf("[ ");
	while (tab[++i])
	{
		printf("\"%s\"", tab[i]);
		if (tab[i + 1])
			printf(", ");
	}
	printf(" ]\n");
}

int	main(void)
{
	char	**splitted;

	splitted = ft_split("", "");
	show_tab(splitted);
	free(splitted);
	splitted = ft_split("coucoucoucoucoucou", "o");
	show_tab(splitted);
	free(splitted);
	splitted = ft_split("BONSOIR LE MONDE ", " ");
	show_tab(splitted);
	free(splitted);
	splitted = ft_split("..o////.../..o.//../o//..", "./");
	show_tab(splitted);
	free(splitted);
	splitted = ft_split("..o////.../..o.//../o//..", ".");
	show_tab(splitted);
	free(splitted);
	return (0);
}
