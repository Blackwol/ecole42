/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:15:20 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/23 17:29:02 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int first;
	int second;
	int res;

	if (argc == 4)
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		if (argv[2][0] == '+')
			res = first + second;
		if (argv[2][0] == '-')
			res = first - second;
		if (argv[2][0] == '*')
			res = first * second;
		if (argv[2][0] == '/')
			res = first / second;
		if (argv[2][0] == '%')
			res = first % second;
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
