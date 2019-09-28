/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:26:11 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/11 17:26:13 by ysalihi          ###   ########.fr       */
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
	ft_putchar('\n');
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int *b)
{
	int c;

	if (a && b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int arg[argc];

	i = 1;
	while (i < argc)
	{
		arg[i] = i;
		++i;
	}
	j = 1;
	while (j < argc)
	{
		k = j;
		while (k < argc)
		{
			if (ft_strcmp(argv[arg[j]], argv[arg[k]]) > 0)
				ft_swap(&arg[j], &arg[k]);
			++k;
		}
		ft_print(argv[arg[j++]]);
	}
	return (0);
}
