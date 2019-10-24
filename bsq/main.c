/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:59:07 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/22 19:41:40 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>

void	int_matrix(char *tab, int matrix[10][10]);
void	ft_putchar(char c);

int		ft_strlen(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	print_matrix(int matrix[10][10])
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (x < 10)
	{
		while (y < 10)
		{
			ft_putchar(matrix[x][y] + '0');
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
}

void	create_matrix(int argc, char **argv, int matrix[10][10], int i, char *test)
{
	int j;
	int ver;
	int fd;

	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(1, "map error\n", 10);
			i++;
			continue;
		}
		ver = read(fd, &test, 1000);
		close(fd);
		j = 0;
		while (test[j])
		{
			write(1, &test[j], 1);
			j++;
		}
		int_matrix(test, matrix);
		print_matrix(matrix);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	test[1000];
	int		matrix[10][10];
	int		i;
	int		j;
	int		ver;
	int		fd;

	i = 1;
	if (argc == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(1, "map error\n", 10);
			i++;
			continue;
		}
		ver = read(fd, &test, 1000);
		close(fd);
		j = 0;
		while (test[j])
		{
			write(1, &test[j], 1);
			j++;
		}
		int_matrix(test, matrix);
		print_matrix(matrix);
		i++;
	}
	return (0);
}
