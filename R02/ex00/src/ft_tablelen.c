/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablelen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 15:48:46 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 09:00:53 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablelen(char **table)
{
	int	c;

	c = 0;
	while (table[c])
		c++;
	return (c);
}
