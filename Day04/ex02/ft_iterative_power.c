/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:22:45 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/04 18:22:51 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	i = 0;
	if (power < 0)
		res = 0;
	else
	{
		res = 1;
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
