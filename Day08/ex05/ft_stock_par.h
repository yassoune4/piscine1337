/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:29:21 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/17 14:04:33 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef	struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);

#endif
