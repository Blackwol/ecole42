/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:28:39 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/19 18:28:41 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char	str[OPEN_MAX][BUFFER_SIZE + 1];
	int			read_count;
	char		*tmp_str;

	if (BUFFER_SIZE <= 0 || !line || (read(fd, NULL, 0) < 0) || fd < 0)
		return (-1);
	tmp_str = malloc(sizeof(char *) * BUFFER_SIZE + 1);
	tmp_str[0] = '\0';
	if (str[fd])
		tmp_str = ft_strjoin(tmp_str, str[fd]);
	while (!has_break_line(tmp_str) &&
			(read_count = read(fd, str[fd], BUFFER_SIZE)) > 0)
	{
		str[fd][read_count] = '\0';
		tmp_str = ft_strjoin(tmp_str, str[fd]);
		if (has_break_line(tmp_str))
			break ;
	}
	if (read_count < 0)
		return (-1);
	*line = get_first_line(tmp_str);
	free(tmp_str);
	return (return_value(read_count == 0 ? 0 : 1, str[fd]));
}

int		has_break_line(char *s)
{
	int	c;

	c = 0;
	while (s[c])
		if (s[c++] == '\n')
			return (1);
	return (0);
}

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	char		*p;
	const char	*s;

	p = dst;
	s = src;
	if (p > s)
	{
		while (len)
		{
			p[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(p, s, len);
	return (dst);
}

void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	size_t	c;
	char	*p;

	p = dst;
	c = 0;
	if (!dst && !src && n)
		return (NULL);
	while (c < n)
	{
		p[c] = ((const char *)src)[c];
		c++;
	}
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char	*ptr;
	int		c;

	c = ft_strlen(s1);
	if (!(ptr = malloc(sizeof(char) * (c + 1))))
		return (NULL);
	while (c >= 0)
	{
		ptr[c] = (char)s1[c];
		c--;
	}
	return (ptr);
}
