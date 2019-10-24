/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:09:26 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/23 18:36:07 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

char	*ft_strrev(char *str)
{
	int		countlast;
	int		countfirst;
	char	aux;

	countfirst = 0;
	countlast = ft_strlen(str);
	while (countfirst < countlast)
	{
		aux = str[countfirst];
		str[countfirst] = str[countlast];
		str[countlast] = aux;
		countfirst++;
		countlast--;
	}
	return (str);
}

int		main(void)
{
	char str[6] = "teste";

	ft_strrev(str);
	printf("%s\n", str);
}
