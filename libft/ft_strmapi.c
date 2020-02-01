/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:59:21 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/25 15:14:11 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	count;
	char	*ptr;

	count = 0;
	if (s && f)
	{
		if (!(ptr = malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[count])
		{
			ptr[count] = f(count, s[count]);
			count++;
		}
		ptr[count] = '\0';
		return (ptr);
	}
	return (NULL);
}
