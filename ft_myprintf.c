/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:33:07 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/27 21:46:22 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(const char *format, va_list args, t_printf *init)
{
	int	i;
	int	res;

	res = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i = 0;
			format++;
			if (*format == '%')
				res += write(1, format, 1);
			else
			{
				while (i < 8 && init[i].fmt != *format)
					i++;
				if (i < 8)
					res += init[i].f(args);
			}
		}
		else
			res += write(1, format, 1);
		format++;
	}
	return (res);
}

t_printf	*init_printf_array(const char *format)
{
	t_printf	*array;

	array = (t_printf *)malloc(sizeof(t_printf) * 8);
	if (!array)
		return (NULL);
	array[0] = (t_printf){'c', ft_putcharsingle};
	array[1] = (t_printf){'s', ft_putstr};
	array[2] = (t_printf){'d', ft_putnbr};
	array[3] = (t_printf){'i', ft_putnbr};
	array[4] = (t_printf){'p', ft_putaddr};
	array[5] = (t_printf){'u', ft_putnbr_unsigned};
	array[6] = (t_printf){'x', ft_puthex_lower};
	array[7] = (t_printf){'X', ft_puthex_upper};
	return (array);
}

int	ft_printf(const char *format, ...)
{
	t_printf	*init;
	va_list		args;
	int			res;

	va_start(args, format);
	res = 0;
	init = init_printf_array(format);
	if (!init)
		return (-1);
	res += handle_format(format, args, init);
	free(init);
	va_end(args);
	return (res);
}
