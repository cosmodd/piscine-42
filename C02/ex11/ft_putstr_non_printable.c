/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:39:07 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 10:02:51 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_not_printable(unsigned char c)
{
	return (c < ' ' || c == 127);
}

void	put_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;

	hex = "0123456789abcdef";
	i = -1;
	while (str[++i])
	{
		if (!is_not_printable(str[i]))
			write(1, &str[i], 1);
		else
			put_hex(str[i]);
	}
}
