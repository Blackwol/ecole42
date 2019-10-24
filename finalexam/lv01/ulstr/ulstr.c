/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:21:26 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/23 17:30:37 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
			ft_putchar(argv[1][i] - 32);
		else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			ft_putchar(argv[1][i] + 32);
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
