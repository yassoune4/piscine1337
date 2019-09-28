/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:56:14 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/12 14:56:35 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strln(char *str)
{
	int cpt;
	int i;

	i = 0;
	cpt = 0;
	while (str[i] != '\0')
	{
		cpt++;
		i++;
	}
	return (cpt);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *d;

	d = malloc(ft_strln(src) + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, src);
	return (d);
}
