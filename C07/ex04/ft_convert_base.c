/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:11:43 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/21 10:03:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_check_base(char *base)
{
	int		i;
	char	c;

	i = -1;
	while (base[++i])
	{
		c = base[i];
		if (c == '+' || c == '-' || c == ' '
			|| (c >= 9 && c <= 13) || ft_in_base(c, base + i + 1) > -1)
			return (0);
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	num;
	int	bsize;

	bsize = ft_check_base(base);
	if (bsize < 2)
		return (0);
	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (ft_in_base(*str, base) > -1)
		num = num * bsize + ft_in_base(*str++, base);
	return (sign * num);
}

int	ft_outnum_len(unsigned int n, unsigned int bsize)
{
	int	count;

	count = 1;
	while (n >= bsize)
	{
		count++;
		n /= bsize;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *from, char *to)
{
	char			*out;
	unsigned int	num;
	int				n;
	int				i;
	int				to_size;

	n = ft_check_base(from);
	to_size = ft_check_base(to);
	if (n < 2 || to_size < 2)
		return (0);
	n = ft_atoi_base(nbr, from);
	num = n * ((n < 0) * -2 + 1);
	i = ft_outnum_len(n * ((n < 0) * -2 + 1), to_size) + (n < 0) * 1;
	out = malloc((i + 1) * sizeof(char));
	if (!out)
		return (0);
	out[i] = 0;
	while (i--)
	{
		out[i] = to[num % to_size];
		num /= to_size;
	}
	if (n < 0)
		out[0] = '-';
	return (out);
}
