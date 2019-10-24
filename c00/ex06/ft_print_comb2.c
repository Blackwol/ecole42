/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 16:51:31 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/07 12:43:03 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int a, int b)
{
	if (a < b)
	{
		ft_putchar((a / 10) + '0');
		ft_putchar((a % 10) + '0');
		ft_putchar(' ');
		ft_putchar((b / 10) + '0');
		ft_putchar((b % 10) + '0');
		if (a < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	b = 1;
	while (a < 99)
	{
		while (b <= 99)
		{
			print_digits(a, b);
			b++;
		}
		a++;
		b = a;
	}
}
