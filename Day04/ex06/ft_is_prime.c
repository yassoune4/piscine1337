/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:03:46 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/05 13:03:51 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}
