/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:03:00 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/11 18:03:27 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		get_next_line(int fd, char **line)
{
	static char	*str[OPEN_MAX];
	int			read_count;
	char		*tmp_str;

	if (BUFFER_SIZE <= 0 || !line || (read(fd, NULL, 0) < 0) || fd < 0)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strdup("");
	tmp_str = malloc(sizeof(char *) * BUFFER_SIZE + 1);
	while ((read_count = read(fd, tmp_str, BUFFER_SIZE)) > 0)
	{
		tmp_str[read_count] = '\0';
		if (!str[fd])
			str[fd] = ft_strdup(tmp_str);
		else
			str[fd] = ft_strjoin(str[fd], tmp_str);
		if (has_break_line(str[fd]))
			break ;
	}
	free(tmp_str);
	if (read_count < 0)
		return (-1);
	*line = get_first_line(str[fd]);
	return (return_value(read_count == 0 ? 0 : 1, str[fd], *line));
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
