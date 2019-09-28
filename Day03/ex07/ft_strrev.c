/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:12:20 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/03 23:47:46 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlenn(char *str)
{
	int cpt;

	cpt = 0;
	while (*str != '\0')
	{
		cpt++;
		str++;
	}
	return (cpt);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		n;
	int		j;

	i = 0;
	n = ft_strlenn(str);
	j = n - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
