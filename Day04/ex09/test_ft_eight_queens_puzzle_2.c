/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:27:23 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/08 10:50:05 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_t[8] = {0};

void	ft_putchar(char c);

int		abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

int		ft_empty(int i)
{
	int j;

	j = 0;
	while ((g_t[i] != g_t[j]) && (abs(g_t[i] - g_t[j]) != (i - j)) && j < 8)
	{
		j++;
	}
	return (i == j) ? 1 : 0;
}

void	ft_printsol(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			j++;
		}
		ft_putchar(g_t[i] + 1 + '0');
		i++;
	}
}

void	ft_search_sol(int i)
{
	g_t[i] = 0;
	while (g_t[i] < 8)
	{
		if (ft_empty(i))
		{
			if (i == 7)
			{
				ft_printsol();
				ft_putchar('\n');
			}
			else
				ft_search_sol(i + 1);
		}
		g_t[i]++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	ft_search_sol(0);
}
