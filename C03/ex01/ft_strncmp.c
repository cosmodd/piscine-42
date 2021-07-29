/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:39:35 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/15 17:07:28 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	unsigned char	a;
	unsigned char	b;
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < size)
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
