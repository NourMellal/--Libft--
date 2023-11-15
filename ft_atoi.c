/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:04 by iel-mach          #+#    #+#             */
/*   Updated: 2023/11/14 19:04:57 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int				sign;
	unsigned long	rus;

	sign = 1;
	rus = 0;
	while (*s == 32 || (*s >= 7 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= (-1);
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		rus = (rus * 10) + (*s - 48);
		if (rus > (~((size_t)0)) && sign == -1)
			return (0);
		else if (rus > (~((size_t)0)) && sign == 1)
			return (-1);
		s++;
	}
	return (sign * rus);
}
