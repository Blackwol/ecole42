/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:15:01 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/21 19:37:16 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		main(void)
{
	char *str1;
	char str2[30];

	str1 = "pcardoso a";
	printf("%s\n", str2);
	ft_strcpy(str2, str1);
	printf("%s\n", str2);
}
