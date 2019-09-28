/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:11:28 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/11 19:11:38 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	determine_sign(char *str, int *sign, int *i)
{
	if (str[*i] == '-')
	{
		*sign = -1;
		*i = *i + 1;
	}
	else if (str[*i] == '+')
	{
		*sign = 1;
		*i = *i + 1;
	}
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	while (str[i] == ' ')
		i++;
	sign = 1;
	determine_sign(str, &sign, &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
