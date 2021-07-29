/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:04:12 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/20 11:18:18 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int n)
{
	unsigned int	i;

	i = 1;
	while (i * i <= (unsigned int) n)
	{
		if (i * i == (unsigned int) n)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int n)
{
	int	i;
	int	sqrt;

	i = 2;
	sqrt = ft_sqrt(n);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	if (n < 2 || !(n % 2 && n % 3 && n % 5 && n % 7))
		return (0);
	while (sqrt && i <= sqrt)
	{
		if (n % i++ == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int n)
{
	if (n < 2)
		return (2);
	while (!ft_is_prime(n))
		n++;
	return (n);
}
