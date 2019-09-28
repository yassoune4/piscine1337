/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:30:31 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/17 14:30:32 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

struct s_stock_par		*ft_param_to_tab(int ac, char **av);
void					ft_putchar(char c);

#endif
