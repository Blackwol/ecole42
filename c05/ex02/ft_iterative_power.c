/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:57:29 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/16 16:04:35 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	power -= 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
