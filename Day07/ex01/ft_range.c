/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:14:30 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/12 15:14:33 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int size;
	int *tab;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	tab = malloc(size * sizeof(int) + 1);
	if (tab == NULL)
		return (tab);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = 0;
	return (tab);
}
