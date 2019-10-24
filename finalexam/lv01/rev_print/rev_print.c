/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:05:01 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/23 12:22:05 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = ft_strlen(argv[1]);
	while (i >= 0)
	{
		write(1, &argv[1][i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
