/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:33:09 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/16 20:33:18 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	duesvault;
	char	*altdst;
	char	*altsrc;

	duesvault = 0;
	altdst = (char *)dst;
	altsrc = (char *)src;
	while (n > 0)
	{
		altdst[duesvault] = altsrc[duesvault];
		if (altsrc[duesvault] == (char)c)
			return (altdst + duesvault + 1);
		duesvault++;
		n--;
	}
	return (NULL);
}
