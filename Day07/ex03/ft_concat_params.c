/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:43:44 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/15 11:46:56 by ysalihi          ###   ########.fr       */
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

int		ft_arg_strln(int argc, char **argv)
{
	int i;
	int cpt;

	i = 1;
	cpt = 0;
	while (i < argc)
	{
		cpt += ft_strln(argv[i]);
		i++;
		cpt++;
	}
	return (cpt);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*tab_arg;

	i = 1;
	k = 0;
	size = ft_arg_strln(argc, argv);
	tab_arg = malloc(size);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			tab_arg[k] = argv[i][j];
			j++;
			k++;
		}
		tab_arg[k] = '\n';
		i++;
		k++;
	}
	tab_arg[k - 1] = '\0';
	return (tab_arg);
}
