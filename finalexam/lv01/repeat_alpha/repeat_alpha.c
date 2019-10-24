/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:51:21 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/23 12:00:06 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_index(char c)
{
	int res;

	if (c >= 97 && c <= 122)
	{
		res = c - 97;
		return (res);
	}
	else if (c >= 57 && c <= 90)
	{
		res = c - 57;
		return (res);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		j = 0;
		while (j <= letter_index(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
