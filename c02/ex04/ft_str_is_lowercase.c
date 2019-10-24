/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:34:18 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/09 13:42:17 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 97 || str[count] > 122)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
