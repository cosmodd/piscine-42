/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:07:59 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/16 08:42:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n, int pow)
{
	if (pow < 0)
		return (0);
	else if (pow == 0)
		return (1);
	return (n * ft_recursive_power(n, pow - 1));
}
