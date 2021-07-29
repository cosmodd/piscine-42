/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:16:37 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/09 09:18:23 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_num(char num[9], int n)
{
	int	i;

	i = n - 1;
	while (--i >= 0)
	{
		if (num[i + 1] <= num[i])
		{
			return (0);
		}
	}
	return (1);
}

int	is_last_valid(char num[9], int n)
{
	return (num[0] == ':' - n && is_valid_num(num, n));
}

void	print_if_valid(char num[9], int n)
{
	if (is_valid_num(num, n))
	{
		write(1, num, n);
		if (!is_last_valid(num, n))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[9];
	int		i;

	i = 0;
	while (i < n)
	{
		num[i] = '0';
		i++;
	}
	while (num[0] < '9')
	{
		i = n;
		num[n - 1]++;
		while (--i >= 0)
		{
			if (num[i + 1] > '9')
			{
				num[i + 1] = '0';
				num[i]++;
			}
		}
		print_if_valid(num, n);
	}
}
