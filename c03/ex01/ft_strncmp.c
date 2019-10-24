/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:29:26 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/15 13:10:50 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				res;

	count = 0;
	while (count < n && (s1[count] || s2[count]))
	{
		if (s1[count] != s2[count])
		{
			res = s1[count] - s2[count];
			return (res);
		}
		count++;
	}
	return (0);
}
