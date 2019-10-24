/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:41:41 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/15 18:59:41 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int n;
	int count;

	n = ft_strlen(dest);
	count = 0;
	while (src[count] != '\0')
	{
		dest[n] = src[count];
		count++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
