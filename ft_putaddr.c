/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:35:04 by nmellal           #+#    #+#             */
/*   Updated: 2023/12/04 10:34:52 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_mputstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

static int	ft_puthex_count(unsigned long nbr)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_puthex_count(nbr / 16);
	ft_putchar(hex[nbr % 16]);
	return (count + 1);
}

int	ft_putaddr(va_list args)
{
	void			*ptr;
	unsigned long	addr;
	int				count;

	ptr = va_arg(args, void *);
	addr = (unsigned long)ptr;
	count = 0;
	if (addr == 0)
	{
		ft_mputstr("(nil)");
		return (5);
	}
	ft_mputstr("0x");
	count += ft_puthex_count(addr) + 2;
	return (count);
}
