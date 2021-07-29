/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:16:44 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/23 18:54:15 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int n)
{
	unsigned int	i;

	i = 1;
	while ((i * i) <= (unsigned int) n)
	{
		if (i * i == (unsigned int) n)
			return (i);
		i++;
	}
	return (0);
}
