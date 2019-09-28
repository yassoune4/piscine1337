/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:46:10 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/08 09:52:29 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_t[8] = {0};
int	g_sol = 0;

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

void	ft_search_sol(int i)
{
	g_t[i] = 0;
	while (g_t[i] < 8)
	{
		if (ft_empty(i))
		{
			if (i == 7)
				g_sol++;
			else
				ft_search_sol(i + 1);
		}
		g_t[i]++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	ft_search_sol(0);
	return (g_sol);
}

int		main(void)
{
	ft_eight_queens_puzzle();
	return (0);
}
