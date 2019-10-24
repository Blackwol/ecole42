/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:38:15 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/17 15:57:34 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str1, char *str2)
{
	int count;
	int res;

	count = 0;
	while (str1[count] || str2[count])
	{
		if (str1[count] != str2[count])
		{
			res = str1[count] - str2[count];
			return (res);
		}
		count++;
	}
	return (0);
}

void	print(char **argv, int argc)
{
	int count;
	int i;

	i = 0;
	count = 1;
	while (count <= argc - 1)
	{
		while (argv[count][i])
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		count++;
	}
}

int		main(int argc, char **argv)
{
	char	*aux;
	int		i;
	int		j;

	j = 2;
	i = 1;
	while (i <= argc - 1)
	{
		while (j <= argc - 1)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[j];
				argv[j] = argv[i];
				argv[i] = aux;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	print(argv, argc);
	return (0);
}
