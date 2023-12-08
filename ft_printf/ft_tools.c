/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:12:59 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/26 00:06:34 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharsingle(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

int	ft_putstr(va_list args)
{
	char	*s;
	int		count;

	s = va_arg(args, char *);
	count = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		count += ft_putchar(*s++);
	}
	return (count);
}

int	ft_putnbr(va_list args)
{
	long	n;
	int		count;
	char	num[12];
	int		i;

	n = va_arg(args, int);
	count = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	while (n)
	{
		num[i++] = n % 10 + '0';
		n /= 10;
	}
	while (--i >= 0)
		count += ft_putchar(num[i]);
	return (count);
}

int	ft_puthex_lower(va_list args)
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
		buffer[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	}
	while (--i >= 0)
		count += ft_putchar(buffer[i]);
	return (count);
}

int	ft_putnbr_unsigned(va_list args)
{
	unsigned int	n;
	int				count;
	char			num[11];
	int				i;

	n = va_arg(args, unsigned int);
	count = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n != 0)
	{
		num[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
		count += ft_putchar(num[i]);
	return (count);
}
