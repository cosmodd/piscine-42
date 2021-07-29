/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trios.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 09:42:16 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 14:16:58 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_trio	*ft_get_trios(char	*str)
{
	t_trio	*trios;
	char	*in;
	int		strlen;
	int		i;

	in = str;
	if (ft_strlen(str) % 3 != 0)
		in = ft_format_num(in);
	strlen = ft_strlen(in);
	trios = malloc((strlen / 3 + 1) * sizeof(t_trio));
	i = 0;
	while (i < strlen / 3)
	{
		trios[i].hundred = TERN(in[0] == '_', NULL, ft_strndup(&in[0], 1));
		trios[i].dozen = TERN(in[1] == '_', NULL, ft_strndup(&in[1], 1));
		trios[i].unit = TERN(in[2] == '_', NULL, ft_strndup(&in[2], 1));
		in += 3;
		i++;
	}
	trios[i].unit = NULL;
	return (trios);
}

int	ft_is_trio_valid(t_trio trio)
{
	return (trio.hundred || trio.dozen || trio.unit);
}

void	ft_free_trios(t_trio *trios)
{
	int	i;

	i = 0;
	while (trios[i].unit)
	{
		TERN(trios[i].hundred, free(trios[i].hundred), 0);
		TERN(trios[i].dozen, free(trios[i].dozen), 0);
		TERN(trios[i].unit, free(trios[i].unit), 0);
		i++;
	}
	free(trios);
}
