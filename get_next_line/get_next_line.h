/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:05:16 by pcardoso          #+#    #+#             */
/*   Updated: 2021/08/22 22:05:17 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*strjoin_newline(char *s1, char *s2);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif
