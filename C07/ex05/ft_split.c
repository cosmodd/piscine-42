/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:59:32 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 09:13:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str++)
		c++;
	return (c);
}

int	ft_is_sep(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
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
		vis = !ft_is_sep(str, charset);
		str++;
	}
	return (wrd);
}

char	*ft_extract_word(char *str, char *charset)
{
	char	*out;
	int		l;
	int		i;

	l = 0;
	while (str[l] && !ft_is_sep(&str[l], charset))
		l++;
	out = malloc((l + 1) * sizeof(char));
	i = 0;
	while (*str && !ft_is_sep(str, charset))
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

	vis = 0;
	i = 0;
	len = ft_count_words(str, charset) + 1;
	tab = malloc(len * sizeof(char *));
	while (*str)
	{
		if (!ft_is_sep(str, charset) && !vis)
			tab[i++] = ft_extract_word(str, charset);
		vis = !ft_is_sep(str, charset);
		str++;
	}
	tab[i] = 0;
	return (tab);
}
