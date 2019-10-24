/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:02:47 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/24 11:26:53 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		anywords(char *str, int i)
{
	while (str[i])
	{
		if (str[i] != 32)
			return (1);
		i++;
	}
	return (0);
}

void	printstr(char *str, int i)
{
	while (str[i] && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ' && av[1][i + 1] >= 33 && av[1][i + 1] <= 127)
			{
				count = i + 1;
			}
			i++;
		}
		printstr(av[1], count);
	}
	write(1, "\n", 1);
	return (0);
}
