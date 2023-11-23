/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:13:15 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/22 05:03:17 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_printf
{
	const char	fmt;
	int		(*f)(va_list);
}				t_printf;

int			ft_printf(const char *format, ...);
t_printf	*init_printf_array(int *i);

#endif