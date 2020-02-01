/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:23:05 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/31 17:24:39 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		count;

	count = 0;
	if (n == 0)
		return (0);
	while (n - 1 > count && (s2[count] && s1[count]) &&
			(s1[count] == s2[count]))
		count++;
	if (s1[count] != s2[count])
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	return (0);
}
