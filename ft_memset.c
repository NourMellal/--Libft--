/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 02:58:27 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/17 18:03:47 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	int a;
// 	ft_memset(&a,0,4);
// 	printf("%d\n", a);
// 	ft_memset(&a,5,2);
// 	printf("%d\n", a);
// 	ft_memset(&a,57,1);
// 	printf("%d\n", a);
// }
