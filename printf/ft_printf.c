/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:33:07 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/22 05:23:23 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_printf	*init_printf_array(int *i)
{
	t_printf	*array;

	array = (t_printf *)malloc(sizeof(t_printf) * 9);
	if (!array)
		return (NULL);
	array[0] = (t_printf){'c', print_char};
	array[1] = (t_printf){'s', print_string};
	array[2] = (t_printf){'d', print_int};
	array[3] = (t_printf){'i', print_int};
	array[4] = (t_printf){'p', print_address};
	array[5] = (t_printf){'u', print_unsigned};
	array[6] = (t_printf){'x', print_lower_hex};
	array[7] = (t_printf){'X', print_upper_hex};
	array[8] = (t_printf){'%', print_percent};
	*i = 0;
	return (array);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			j;
	size_t		res;
	t_printf	*init;

	if (!format)
		return(-1);
	init = init_printf_array(&i, format);
}
