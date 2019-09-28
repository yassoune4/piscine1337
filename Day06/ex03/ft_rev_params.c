/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:08:46 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/11 17:08:50 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_print(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
