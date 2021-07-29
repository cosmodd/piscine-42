/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:08:17 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 12:21:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	ft_is_key_valid(char *key)
{
	char	*parsed;

	parsed = ft_atoa(key);
	return (ft_strlen(parsed));
}

int	ft_is_value_valid(char *value)
{
	return (ft_str_is_printable(value));
}

t_dict	*ft_get_dict(char	*path)
{
	t_dict	*dict;
	char	**entries;
	char	**splitted;
	int		i;

	entries = read_file(path);
	if (!entries)
		return (NULL);
	i = 0;
	dict = malloc((ft_tablelen(entries) + 1) * sizeof(t_dict));
	while (entries[i])
	{
		splitted = ft_split_first(entries[i], ":");
		if (!splitted || ft_tablelen(splitted) != 2)
			return (NULL);
		dict[i].key = ft_trim(splitted[0]);
		dict[i].value = ft_trim(splitted[1]);
		if (!ft_is_key_valid(dict[i].key) || !ft_is_value_valid(dict[i].value))
			return (NULL);
		i++;
	}
	dict[i].key = NULL;
	free(entries);
	return (dict);
}

void	ft_free_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].key)
	{
		free(dict[i].key);
		free(dict[i++].value);
	}
	free(dict);
}

char	*ft_get_value(t_dict *dict, char *key)
{
	int	i;

	if (!key)
		return (NULL);
	i = 0;
	while (dict[i].key)
	{
		if (!ft_strcmp(dict[i].key, key))
			return (dict[i].value);
		i++;
	}
	return (NULL);
}
