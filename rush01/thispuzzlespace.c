/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thispuzzlespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:59:06 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 23:39:48 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		directionlr(int c, int puzzle[6][6]);

int		directionrl(int c, int puzzle[6][6]);

int		solvepuzzle(int r, int c, int puzzle[6][6]);

int		samecolumn(int r, int num, int puzzle[6][6]);

int		samerow(int c, int num, int puzzle[6][6]);

int		directiondu(int c, int puzzle[6][6]);

int		directionud(int c, int puzzle[6][6]);

int		thispuzzlespace(int *num, int *x, int *y, int puzzle[6][6])
{
	int tx;
	int ty;

	tx = 1;
	ty = 1;
	while (*num < 5)
	{
		if ((!samerow(*y, *num, puzzle)) && (!samecolumn(*x, *num, puzzle)))
		{
			puzzle[*x][*y] = *num;
			if ((*x == 4) && (*y == 4))
			{
				if ((!directionlr(*y, puzzle)) || (!directionrl(*y, puzzle)))
					return (0);
				return (1);
			}
			if (*x < 4)
				tx = *x + 1;
			else
			{
				if (*y < 4)
				{
					if ((!directionlr(*y, puzzle)) ||
							(!directionrl(*y, puzzle)))
						return (0);
					tx = 1;
					ty = *y + 1;
				}
			}
			if (solvepuzzle(tx, ty, puzzle))
				return (1);
		}
		++*num;
	}
	return (0);
}
