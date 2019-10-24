/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:46:40 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/17 16:30:29 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isspace(int n);

int		minus(char *str)
{
	int countminus;
	int count;

	count = 0;
	countminus = 0;
	while (str[count] != '\0')
	{
		if (str[count] == 45)
			countminus++;
		if (str[count] >= 48 && str[count] <= 57)
		{
			break ;
		}
		count++;
	}
	if (countminus % 2 == 0)
		return (1);
	else
		return (-1);
}

int		ft_atoi(char *str)
{
	int res;
	int count;

	count = 0;
	res = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 48 && str[count] <= 57)
			break ;
		count++;
	}
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
		{
			break ;
		}
		res = res * 10 + str[count] - '0';
		count++;
	}
	return (res * minus(str));
}
