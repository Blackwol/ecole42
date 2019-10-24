/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:29:48 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/16 15:35:12 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int sizesrc;
	unsigned int sizedest;

	sizesrc = 0;
	sizedest = 0;
	while (dest[sizedest])
		sizedest++;
	while ((sizesrc < nb) && (src[sizesrc]))
	{
		dest[sizedest] = src[sizesrc];
		sizesrc++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
