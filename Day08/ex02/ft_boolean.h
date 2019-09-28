/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:12:08 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/16 09:12:09 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"
# define EVEN(x) (x % 2 == 0 ? 1 : 0)
# include "unistd.h"

typedef int		t_bool;
#endif
