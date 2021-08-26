/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:13:19 by pcardoso          #+#    #+#             */
/*   Updated: 2021/08/22 22:13:21 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*strjoin_newline(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*n_str;

	i = 0;
	j = 0;
	n_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!(n_str))
		return (NULL);
	while (s1[i] != '\0')
	{
		n_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\n')
		n_str[i++] = s2[j++];
	n_str[i] = '\n';
	n_str[i + 1] = '\0';
	free(s1);
	return (n_str);
}

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*tmp;

	size = 0;
	i = 0;
	size = ft_strlen(s1);
	tmp = malloc(sizeof(char) * size + 1);
	if (tmp == NULL)
		return (NULL);
	while (i < size)
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

size_t	ft_strlen(const char *str)
{
	size_t	char_count;

	char_count = 0;
	while (str[char_count] != '\0')
	{
		char_count++;
	}
	return (char_count);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*n_dst;
	const char		*n_src;

	i = 0;
	n_dst = dst;
	n_src = src;
	if (n_dst > n_src)
	{
		i = n;
		while (i > 0)
		{
			n_dst[i - 1] = n_src[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*n_str;

	i = 0;
	j = 0;
	n_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(n_str))
		return (NULL);
	while (s1[i] != '\0')
	{
		n_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		n_str[i++] = s2[j++];
	n_str[i] = '\0';
	free(s1);
	return (n_str);
}
