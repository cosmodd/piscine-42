/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:27:31 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/11 13:57:45 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	//char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char test[] = "SALUT, COMMENT TU VAS ? 42mots quarante-deux; cinquante+et+un";
	puts(ft_strcapitalize(test));
	return (0);
}
