/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibilitytestlr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:35:58 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 03:05:02 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	directionlr(int y, int puzzle[6][6])
{
	int x;
	int n;
	int visibility;

	x = 2;
	n = puzzle[1][y];
	visibility = 1;
	while (x < 5)
	{
		if (puzzle[x][y] > n)
		{
			visibility++;
			n = puzzle[x][y];
		}
		x++;
	}
	if (puzzle[0][y] == visibility)
		return (1);
	else
		return (0);
}
