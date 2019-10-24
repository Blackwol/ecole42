/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:00:57 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/17 16:42:13 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		intlength(int x)
{
	if (x >= 1000000000 || x <= -1000000000)
		return (10);
	if (x >= 100000000 || x <= -100000000)
		return (9);
	if (x >= 10000000 || x <= -10000000)
		return (8);
	if (x >= 1000000 || x <= -1000000)
		return (7);
	if (x >= 100000 || x <= -100000)
		return (6);
	if (x >= 10000 || x <= -10000)
		return (5);
	if (x >= 1000 || x <= -1000)
		return (4);
	if (x >= 100 || x <= -100)
		return (3);
	if (x >= 10 || x <= -10)
		return (2);
	return (1);
}

void	printnegative(int nbr)
{
	if (nbr == 1)
	{
		write(1, "-", 1);
	}
}

void	print(char *str, int nb, int isnegative, int i)
{
	int		base;
	long	number;

	number = nb;
	base = 10;
	if (number < 0)
	{
		isnegative = 1;
		number = -number;
	}
	while (number != 0)
	{
		str[i] = (number % 10) + 48;
		number = number / base;
		i++;
	}
	printnegative(isnegative);
	str[i] = '\0';
	i -= 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	str[intlength(nb)];
	int		base;
	int		i;
	int		isnegative;

	isnegative = 0;
	i = 0;
	base = 10;
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
		print(str, nb, isnegative, i);
}
