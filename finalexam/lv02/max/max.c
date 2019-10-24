/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:49:35 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/24 12:16:14 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int res;
	int i;

	res = 0;
	i = 0;
	while (tab[i] && i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

int		main(void)
{
	int str[5] = {1, 3, 10, 4, 5};

	printf("%d\n", max(str, 5));
}
