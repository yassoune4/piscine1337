/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:45:32 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/12 15:45:35 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	tab = malloc(size);
	if (tab == NULL)
		return (0);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	if (*range == NULL)
		return (0);
	return (size);
}
