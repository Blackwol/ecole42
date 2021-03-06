/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:58:44 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/31 17:21:54 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i[4];

	i[0] = 0;
	i[3] = ft_strlen(s2);
	if (i[3] == 0)
		return ((char *)&s1[i[0]]);
	while (i[0] < len && s1[i[0]])
	{
		i[1] = 0;
		if (s1[i[0]] == s2[i[1]])
		{
			i[2] = i[0] + 1;
			i[1]++;
			while (i[2] < len && s1[i[2]] && s2[i[1]] && s1[i[2]] == s2[i[1]])
			{
				i[1]++;
				i[2]++;
			}
			if (i[1] == i[3])
				return ((char *)&s1[i[0]]);
		}
		i[0]++;
	}
	return (NULL);
}
