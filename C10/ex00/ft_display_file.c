/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 09:29:15 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 10:44:28 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

void	ft_display_file(char *filename)
{
	char	buffer[BUFFER_SIZE];
	int		descriptor;
	int		rd;

	descriptor = open(filename, O_RDONLY);
	if (descriptor < 0)
	{
		ft_putstr_out("Cannot read file.", STDERR_FILENO);
		return ;
	}
	rd = read(descriptor, buffer, BUFFER_SIZE);
	while (rd)
	{
		buffer[rd] = 0;
		ft_putstr_out(buffer, STDOUT_FILENO);
		rd = read(descriptor, buffer, BUFFER_SIZE);
	}
}
