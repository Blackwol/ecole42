/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:54:57 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/21 20:10:59 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int		main(void)
{
	int i;
	int j;

	i = 3;
	j = 9;
	printf("%d\n", i);
	printf("%d\n", j);
	ft_swap(&i, &j);
	printf("%d\n", i);
	printf("%d\n", j);
}
