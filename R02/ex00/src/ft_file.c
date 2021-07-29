/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 09:33:01 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 10:56:40 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**read_file(char *path)
{
	char	buffer[BUFFER_SIZE];
	int		file;
	int		rd;

	file = open(path, O_RDONLY);
	if (file < 0)
		return (NULL);
	rd = read(file, buffer, BUFFER_SIZE);
	if (!rd)
		return (NULL);
	buffer[rd] = '\0';
	close(file);
	return (ft_split(buffer, "\n"));
}

int	count_lines(char *buffer)
{
	int		ln;

	if (!buffer)
		return (0);
	ln = ft_count_words(buffer, "\n");
	return (ln);
}
