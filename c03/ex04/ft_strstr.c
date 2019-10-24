/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:45:10 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/12 00:54:09 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int count;

	if (to_find[0] == '\0')
		return (str);
	count = 0;
	while (str[count] != '\0')
	{
		n = 0;
		while (to_find[n] == str[count + n])
		{
			if (to_find[n + 1] == '\0')
				return (&str[count]);
			n++;
		}
		count++;
	}
	return (0);
}
