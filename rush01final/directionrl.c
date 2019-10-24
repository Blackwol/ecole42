/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibilitytestrl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:35:17 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/13 03:05:22 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	directionrl(int y, int puzzle[6][6])
{
	int x;
	int n;
	int visibility;

	x = 3;
	n = puzzle[4][y];
	visibility = 1;
	while (x > 0)
	{
		if (puzzle[x][y] > n)
		{
			visibility++;
			n = puzzle[x][y];
		}
		x--;
	}
	if (puzzle[5][y] == visibility)
		return (1);
	else
		return (0);
}
