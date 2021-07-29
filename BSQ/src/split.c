/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:36:55 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/26 11:36:59 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_is_sep(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (*str == 0);
}

int	ft_count_words(char *str, char *charset)
{
	int	wrd;
	int	vis;

	wrd = 0;
	vis = 0;
	while (*str)
	{
		if (!ft_is_sep(str, charset) && !vis)
			wrd++;
		vis = !ft_is_sep(str++, charset);
	}
	return (wrd);
}

char	*ft_extract_word(char *str, char *charset)
{
	char	*out;
	int		l;
	int		i;

	i = 0;
	l = 0;
	while (!ft_is_sep(&str[i++], charset))
		l++;
	out = malloc((l + 1) * sizeof(char));
	i = 0;
	while (!ft_is_sep(str, charset))
		out[i++] = *str++;
	out[i] = 0;
	return (out);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		len;
	int		vis;
	int		i;

	if (ft_strlen(charset) < 1)
		return (0);
	vis = 0;
	i = 0;
	len = ft_count_words(str, charset) + 1;
	tab = malloc(len * sizeof(char *));
	while (*str)
	{
		if (!ft_is_sep(str, charset) && !vis)
			tab[i++] = ft_extract_word(str, charset);
		vis = !ft_is_sep(str++, charset);
	}
	tab[i] = 0;
	return (tab);
}
