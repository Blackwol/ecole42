/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nextpuzzlespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:36:49 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 23:17:36 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		directionlr(int c, int puzzle[6][6]);

int		directionrl(int c, int puzzle[6][6]);

int		directiondu(int c, int puzzle[6][6]);

int		directionud(int c, int puzzle[6][6]);

int		solvepuzzle(int r, int c, int puzzle[6][6]);

int		nextpuzzlespace(int *r, int *c, int puzzle[6][6])
{
	if ((*r == 4) && (*c == 4))
	{
		if ((!directionlr(*r, puzzle)) || (!directionrl(*r, puzzle)))
			return (0);
		return (1);
	}
	if (*c < 4)
		++*c;
	else
	{
		if ((!directionlr(*r, puzzle)) || (!directionrl(*r, puzzle)))
			return (0);
		*c = 1;
		++*r;
	}
	if (solvepuzzle(*r, *c, puzzle))
		return (1);
	else
		return (0);
}
