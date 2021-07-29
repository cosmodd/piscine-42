/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:56:50 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 15:29:08 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	else if (n > 1)
		return (n * ft_recursive_factorial(n - 1));
	return (1);
}
