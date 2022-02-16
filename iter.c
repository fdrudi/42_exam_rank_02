/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrudi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:30:13 by fdrudi            #+#    #+#             */
/*   Updated: 2022/02/16 16:30:15 by fdrudi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *argv, char c, int i)
{
	while (i--)
	{
		if (argv[i] == c)
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int j;

	if (argc != 3)
		return (0);
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j] && !(ft_check(argv[1], argv[1][i], i)))
			{
				write(1, &argv[1][i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
