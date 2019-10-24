/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:24:15 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 23:18:05 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solvepuzzle(int x, int y, int puzzle[6][6]);

void	printpuzzle(int puzzle[6][6]);

int		samecolumn(int x, int num, int puzzle[6][6]);

int		samerow(int y, int num, int puzzle[6][6]);

int		directionlr(int y, int puzzle[6][6]);

int		directionrl(int y, int puzzle[6][6]);

void	ft_putchar(char c);

int		nextpuzzlespace(int *r, int *c, int puzzle[6][6]);

int		thispuzzlespace(int *num, int *r, int *c, int puzzle[6][6]);

int		resolvepuzzle(int puzzle[6][6])
{
	int x;
	int y;

	x = 1;
	y = 1;
	solvepuzzle(x, y, puzzle);
	return (0);
}

int		solvepuzzle(int x, int y, int puzzle[6][6])
{
	int num;
	int tx;
	int ty;

	num = 1;
	tx = 1;
	ty = 1;
	if (puzzle[x][y] != 0)
	{
		if (nextpuzzlespace(&x, &y, puzzle))
			return (1);
		return (0);
	}
	if (puzzle[x][y] == 0)
	{
		if (thispuzzlespace(&num, &x, &y, puzzle))
			return (1);
		puzzle[x][y] = 0;
		return (0);
	}
	return (0);
}
