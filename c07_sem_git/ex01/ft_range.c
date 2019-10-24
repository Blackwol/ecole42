/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:10:28 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/18 19:01:34 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ptr;
	int *ptr2;
	int diff;

	ptr2 = NULL;
	if (min >= max)
		return (ptr2);
	else
	{
		diff = max - min;
		i = 0;
		ptr = (int*) malloc(sizeof(ptr) * diff);
		while (i < diff)
		{
			ptr[i] = min;
			min++;
			i++;
		}
	}
	return (ptr);
}
