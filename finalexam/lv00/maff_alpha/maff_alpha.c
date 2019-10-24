/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:23:51 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/21 19:47:38 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i % 2 == 0)
			ft_putchar(i - 32);
		else
			ft_putchar(i);
		i++;
	}
	write(1, "\n", 1);
}
