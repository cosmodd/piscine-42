/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:49:16 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/19 16:19:30 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
