/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:09:14 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/29 16:30:30 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	read_next(int f_desc, int *size, char **content)
{
	char	buffer[FILE_BUFFER];
	char	*temp;
	int		rd_len;

	rd_len = read(f_desc, buffer, FILE_BUFFER);
	temp = malloc((*size + rd_len + 1) * sizeof(char));
	if (!temp)
		return (-1);
	temp = ft_strncpy(temp, *content, *size);
	free(*content);
	ft_strncpy(temp + *size, buffer, rd_len);
	*content = temp;
	*size += rd_len;
	return (rd_len);
}

char	*read_file(int f_desc)
{
	char	*f_content;
	int		rd_len;
	int		size;

	f_content = malloc(sizeof(char));
	if (!f_content)
		return (NULL);
	size = 0;
	rd_len = read_next(f_desc, &size, &f_content);
	while (rd_len > 0)
		rd_len = read_next(f_desc, &size, &f_content);
	f_content[size] = 0;
	if (rd_len == -1)
		free(f_content);
	return (TERN(rd_len == -1, NULL, f_content));
}

char	*load_file(char *path)
{
	char	*f_content;
	int		f_desc;

	f_desc = TERN(path, open(path, O_RDONLY), STDIN_FILENO);
	if (f_desc < 0)
		return (NULL);
	f_content = read_file(f_desc);
	if (path)
		close(f_desc);
	return (f_content);
}
