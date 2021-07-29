/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:19:34 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 14:32:18 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	unsigned char	a;
	unsigned char	b;
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < size)
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	find_size;

	i = -1;
	find_size = ft_strlen(to_find);
	if (!find_size)
		return (str);
	while (str[++i])
		if (ft_strncmp(&str[i], to_find, find_size) == 0)
			return (&str[i]);
	return (0);
}
