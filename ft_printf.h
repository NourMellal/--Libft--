/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:13:15 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/25 23:52:46 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
typedef struct s_printf
{
	char	fmt;
	int		(*f)(va_list);
}				t_printf;

int			ft_printf(const char *format, ...);
t_printf	*init_printf_array(const char *format);
int			handle_format(const char *format, va_list args, t_printf *init);
int			ft_putstr(va_list args);
int			ft_putnbr(va_list args);
int			ft_puthex_upper(va_list args);
int			ft_puthex_lower(va_list args);
int			ft_putnbr_unsigned(va_list args);
int			ft_putcharsingle(va_list args);
int			ft_putaddr(va_list args);
int			ft_putchar(int c);
int			ft_put37(va_list args);



#endif