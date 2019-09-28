/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:58:34 by ysalihi           #+#    #+#             */
/*   Updated: 2018/08/31 16:51:50 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_nbr(char c1, char c2, char c3)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
	if (c1 != '7' || c2 != '8' || c3 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_nbr(a + '0', b + '0', c + '0');
				c++;
			}
			b++;
		}
		a++;
	}
}
