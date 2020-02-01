/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:37:50 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/28 17:59:42 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenint(long n)
{
	int c;

	if (n == 0)
		return (1);
	c = 0;
	if (n == 0)
		c++;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static char	*ft_reverse(char *s)
{
	int		count_start;
	int		count_end;
	char	aux;

	count_start = 0;
	count_end = ft_strlen(s) - 1;
	while (count_start < count_end)
	{
		aux = s[count_start];
		s[count_start++] = s[count_end];
		s[count_end--] = aux;
	}
	return (s);
}

static int	is_negative(long n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	long	n_long;
	int		count;
	int		nbr_count;

	count = 0;
	n_long = n;
	nbr_count = lenint(n_long);
	if (!(ptr = malloc((lenint(n_long) + 1 + is_negative(n_long)) *
					sizeof(char))))
		return (NULL);
	if (n_long < 0)
		n_long = n_long * -1;
	while (nbr_count-- > 0)
	{
		ptr[count++] = (n_long % 10) + 48;
		n_long = n_long / 10;
	}
	if (n < 0)
		ptr[count++] = '-';
	ptr[count] = '\0';
	ptr = ft_reverse(ptr);
	return (ptr);
}
