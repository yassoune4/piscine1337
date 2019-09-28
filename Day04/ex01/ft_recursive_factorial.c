/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:18:43 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/04 18:20:47 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (1);
	}
}
