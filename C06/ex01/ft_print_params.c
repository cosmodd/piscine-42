/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:36:59 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/16 10:39:05 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		return (0);
	while (argv[++i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
