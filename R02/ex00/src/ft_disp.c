/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 14:13:10 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/25 19:43:57 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	put_space(int *print_spc)
{
	if (*print_spc)
		ft_putstr_out(" ", STDOUT_FILENO);
	*print_spc = 1;
}

int	ft_disp_hundred(t_dict *dict, t_trio trio, int *print_spc)
{
	char	*value;
	char	*hundred;

	value = ft_get_value(dict, trio.hundred);
	hundred = ft_get_value(dict, "100");
	if (value && hundred)
	{
		put_space(print_spc);
		ft_putstr_out(value, STDOUT_FILENO);
		ft_putstr_out(" ", STDOUT_FILENO);
		ft_putstr_out(hundred, STDOUT_FILENO);
		return (1);
	}
	return (0);
}

int	ft_disp_dozen(t_dict *dict, t_trio trio, int *print_spc)
{
	char	*with_unit;
	char	*value;
	char	*tens;

	with_unit = trio.dozen;
	ft_strcat(with_unit, trio.unit);
	value = ft_get_value(dict, with_unit);
	if (!value)
	{
		with_unit[1] = '0';
		value = ft_get_value(dict, with_unit);
	}
	if (!value)
	{
		tens = ft_get_value(dict, "10");
		value = ft_get_value(dict, trio.dozen);
	}
	if (value)
	{
		put_space(print_spc);
		ft_putstr_out(value, STDOUT_FILENO);
		if (tens)
		{
			ft_putstr_out(" ", STDOUT_FILENO);
			ft_putstr_out(tens, STDOUT_FILENO);
		}
	}
	return (value != NULL);
}

int	ft_disp_unit(t_dict *dict, t_trio trio, int *print_spc)
{
	char	*value;

	value = ft_get_value(dict, trio.unit);
	if (value)
	{
		put_space(print_spc);
		ft_putstr_out(value, STDOUT_FILENO);
	}
	return (value != NULL);
}
