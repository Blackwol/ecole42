/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:06:15 by exam              #+#    #+#             */
/*   Updated: 2019/10/18 12:43:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		minus(const char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] && (str[i] < 48 || str[i] > 57))
	{
		if (str[i] == 45)
			count++;
		i++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int		ft_atoi(const char *str)
{
	int res;
	int i;

	res = 0;
	i = 0;
	if ((str[i] != 45 && str[i] != 43) && (str[i] < 48 || str[i] > 57))
		return (0);
	while (str[i] && (str[i] < 48 || str[i] > 57))
		i++;
	if (i > 1)
		return (0);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * minus(str));
}
