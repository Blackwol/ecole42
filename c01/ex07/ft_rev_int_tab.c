/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:30 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/08 21:01:10 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int count1;
	int count2;
	int metade;
	int aux;

	count1 = 0;
	count2 = size - 1;
	metade = size / 2;
	while (metade > 0)
	{
		aux = tab[count1];
		tab[count1] = tab[count2];
		tab[count2] = aux;
		count2--;
		count1++;
		metade--;
	}
}
