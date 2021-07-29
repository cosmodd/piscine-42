/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:45:28 by mrattez           #+#    #+#             */
/*   Updated: 2021/07/18 16:12:55 by mrattez          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] || s2[i])
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort(char **tab, int size)
{
	int	i;
	int	j;
	int	min_idx;

	i = -1;
	while (++i < size - 1)
	{
		min_idx = i;
		j = i;
		while (++j < size)
			if (ft_strcmp(tab[i], tab[j]) > ft_strcmp(tab[i], tab[min_idx]))
				min_idx = j;
		ft_swap(&tab[i], &tab[min_idx]);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		return (0);
	argv++;
	sort(argv, argc - 1);
	while (i < argc - 1)
	{
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
	return (0);
}
