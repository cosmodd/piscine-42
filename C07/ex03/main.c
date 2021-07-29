/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 08:57:26 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/29 17:25:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_pstrjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);

int	main(void)
{
	int		quantity = 0;
	char	**strings = malloc(quantity * sizeof(char *));
	char	*sep = " | ";
	int		i = 0;

	while (++i <= quantity)
	{
		strings[i - 1] = malloc(2 * sizeof(char));
		strings[i - 1][0] = '0' + i - 1;
		strings[i - 1][1] = 0;
	}

	char *pjoined = ft_pstrjoin(quantity, strings, sep);
	printf("pforesti : \"%s\"\n", pjoined);
	free(pjoined);
	printf("\n");
	char *joined = ft_strjoin(quantity, strings, sep);
	printf("mrattez  : \"%s\"\n", joined);
	free(joined);

	free(strings);
	return (0);
}