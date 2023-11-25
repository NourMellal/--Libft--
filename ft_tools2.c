/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:17:56 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/25 18:00:36 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(va_list args)
{
	unsigned int	num;
	int				count;
	char			buffer[9];
	int				i;

	num = va_arg(args, unsigned int);
	count = 0;
	i = 0;
	if (num == 0)
		return (ft_putchar('0'));
	while (num)
	{
		buffer[i++] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	}
	while (--i >= 0)
		count += ft_putchar(buffer[i]);
	return (count);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_put37(va_list args)
{
	int c = va_arg(args, int);
	(void)c;
	ft_putchar('%');
	return (1);
}
