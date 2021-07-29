/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:16:28 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/16 13:06:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	final;
	int	i;

	i = 0;
	final = 1;
	if (n < 0)
		return (0);
	while (++i <= n)
		final *= i;
	return (final);
}
