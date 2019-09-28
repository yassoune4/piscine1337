/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:12:59 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/11 19:13:02 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_first_letter(char *str, int i)
{
	if (!(str[i - 1] <= 122 && str[i - 1] >= 97) &&
		!(str[i - 1] <= 91 && str[i - 1] >= 65) &&
		!(str[i - 1] <= 57 && str[i - 1] >= 48))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_first_letter(str, i) && str[i] <= 122 && str[i] >= 97)
			str[i] -= 32;
		else
		{
			if (str[i] >= 65 && str[i] <= 91 && !is_first_letter(str, i))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
