/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:53:22 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/11 17:28:19 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;
	int n;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
		{
			n = s1[count] - s2[count];
			return (n);
		}
		count++;
	}
	return (0);
}
