/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:37:57 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/21 19:40:46 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(void)
{
	char *str;
	char *str1;

	str1 = "";
	str = "pcardoso a";
	printf("%d\n", ft_strlen(str));
	printf("%d\n", ft_strlen(str1));
}
