/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:06:03 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/11 18:06:09 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_substr(char *s, unsigned long start, unsigned long len)
{
	unsigned long	c;
	char			*str;

	c = 0;
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if ((int)start > ft_strlen(s))
	{
		str[c] = '\0';
		return (str);
	}
	while (c < len && s[c + start])
	{
		str[c] = s[c + start];
		c++;
	}
	str[c] = '\0';
	return (str);
}

char	*get_first_line(char *s)
{
	int		count;
	char	*str;

	count = 0;
	while (s[count] && s[count] != '\n')
		count++;
	str = ft_substr(s, 0, count);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		c1;
	int		c2;

	if (!(ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)))))
		return (NULL);
	c1 = 0;
	c2 = 0;
	while (s1[c1])
	{
		ptr[c1] = s1[c1];
		c1++;
	}
	while (s2[c2])
	{
		ptr[c1] = s2[c2];
		c1++;
		c2++;
	}
	ptr[c1] = '\0';
	free(s1);
	return (ptr);
}

int		return_value(int read_count, char *str, char *line)
{
	int		count;
	char	*aux;

	aux = ft_strdup(str);
	count = ft_strlen(line) + 1;
	while (count--)
		ft_memmove(str, str + 1, ft_strlen(str));
	if ((aux[0] == '\0' && !read_count) || !has_break_line(aux))
	{
		free(aux);
		return (0);
	}
	free(aux);
	return (1);
}
