/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:23:26 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/30 14:52:33 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	full_size;

	full_size = count * size;
	if (!(ptr = malloc(full_size)))
		return (NULL);
	ft_memset(ptr, 0, full_size);
	return (ptr);
}
