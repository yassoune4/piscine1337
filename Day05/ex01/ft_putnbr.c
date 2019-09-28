/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:09:50 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/11 19:11:20 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb > -10)
	{
		ft_putchar('-');
		ft_putchar(-1 * nb + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-1 * (nb / 10));
		ft_putnbr(nb % 10 * -1);
	}
}
