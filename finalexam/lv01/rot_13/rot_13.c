/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:23:30 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/23 12:52:42 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rotate13(char c)
{
	int i;

	i = 13;
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		while (i > 0)
		{
			c++;
			if (c > 90 && c < 92)
				c = 65;
			else if (c > 122)
				c = 97;
			i--;
		}
	}
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	char	res;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		res = rotate13(argv[1][i]);
		write(1, &res, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
