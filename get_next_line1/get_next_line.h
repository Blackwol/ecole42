/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:19:08 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/11 17:41:10 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_strlen(char *s);
char	*get_first_line(char *s);
int		get_next_line(int fd, char **line);
char	*ft_substr(char *s, unsigned long start, unsigned long len);
int		has_break_line(char *s);
void	*ft_memmove(void *dst, const void *src, unsigned long len);
void	*ft_memcpy(void *dst, const void *src, unsigned long n);
int		return_value(int read_count, char *str, char *line);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif
