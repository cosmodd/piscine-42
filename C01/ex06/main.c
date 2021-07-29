/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 08:09:38 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/10 08:11:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

void	print_len(char *str)
{
	printf("\"%s\" => %d", str, ft_strlen(str));
}

int	main(void)
{
	print_len("coucou");
	return (0);
}
