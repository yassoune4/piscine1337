/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:46 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/12 10:57:45 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
