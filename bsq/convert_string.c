/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:59:58 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/22 18:09:06 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		int_matrix(char *tab, int matrix[10][10])
{
	int i;
	int x;
	int y;
	int cheio;
	int vazio;
	int obstaculo;

	i = 0;
	x = 0;
	y = 0;
	while (tab[i] != '\n')
		i++;
	cheio = tab[i - 1];
	obstaculo = tab[i - 2];
	vazio = tab[i -3];
	i++;
	while (tab[i] != '\0')
	{
		if (tab[i] == '\n')
		{
			x++;
			i++;
			y = 0;
			continue ;
		}
		if (tab[i] == obstaculo)
			matrix[x][y] = 0;
		if (tab[i] == vazio)
			matrix[x][y] = 1;
		i++;
		y++;
	}
}
