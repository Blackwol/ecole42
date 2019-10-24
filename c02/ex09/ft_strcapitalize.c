/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:13:14 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/10 17:33:48 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char str)
{
	if (str < 48 || str > 57)
	{
		return (0);
	}
	return (1);
}

int		is_minuscula(char str)
{
	if (str >= 97 && str <= 122)
	{
		return (1);
	}
	return (0);
}

int		is_maiuscula(char str)
{
	if (str >= 65 && str <= 90)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	if (is_minuscula(str[count]) == 1)
	{
		str[count] -= 32;
	}
	count++;
	while (str[count] != '\0')
	{
		if ((is_minuscula(str[count])) && (is_numeric(str[count - 1]) == 0 &&
					is_minuscula(str[count - 1]) == 0 &&
					is_maiuscula(str[count - 1]) == 0))
		{
			str[count] -= 32;
		}
		else if (is_maiuscula(str[count]) == 1)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
