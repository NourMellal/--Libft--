/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:35:04 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/25 20:41:51 by nmellal          ###   ########.fr       */
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

static void	ft_puthex(unsigned long nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
		ft_puthex(nbr / 16);
	ft_putchar(hex[nbr % 16]);
}

int	ft_putaddr(va_list args)
{
	void			*ptr;
	unsigned long	addr;

	ptr = va_arg(args, void *);
	addr = (unsigned long)ptr;
	ft_mputstr("0x");
	if (addr == 0)
		ft_putchar('0');
	else
		ft_puthex(addr);
	return (0);
}
