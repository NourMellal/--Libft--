/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:00:31 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/17 18:03:38 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		tmp2++;
		tmp1++;
		n--;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main
// ()
// {
// 	char s1[] = "a";
// 	char s2[] = "z";
// 	printf("%d\n", ft_memcmp("a", "d", 1));
// 	printf("%d\n", ft_memcmp(s1, s2, 1));
// 	printf("%d\n", memcmp("a", "z", 1));
// 	printf("%d\n", memcmp(s1, s2, 1));
// }
