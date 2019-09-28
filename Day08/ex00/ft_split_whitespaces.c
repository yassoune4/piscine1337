/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:30:54 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/12 18:30:58 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_index_w;
int		g_leng;

int		exist_spaces(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}

int		nbr_of_words(char *str)
{
	int word;
	int cpt;
	int i;

	word = 0;
	cpt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!exist_spaces(str[i]) && word == 0)
		{
			cpt++;
			word = 1;
		}
		else if (exist_spaces(str[i]))
		{
			word = 0;
		}
		++i;
	}
	return (cpt);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !exist_spaces(str[i]))
		++i;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		word;
	int		i;

	array = (char **)malloc(nbr_of_words(str) * sizeof(char *) + 1);
	word = 0;
	g_index_w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!exist_spaces(str[i]) && word == 0)
		{
			word = 1;
			g_leng = ft_strlen(&str[i]);
			array[g_index_w] = (char *)malloc((g_leng + 1) * sizeof(char));
			array[g_index_w] = ft_strncpy(array[g_index_w], &str[i], g_leng);
			g_index_w++;
		}
		else if (exist_spaces(str[i]))
			word = 0;
		++i;
	}
	array[g_index_w] = 0;
	return (array);
}
