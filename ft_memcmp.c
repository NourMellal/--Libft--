/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:00:31 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/02 18:15:17 by nmellal          ###   ########.fr       */
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

// int main(int ac, char **av)
// {
// 	(void)ac;
// 	int r = ft_memcmp(av[1], NULL, 3);
// 	int r2 = memcmp(av[1], NULL, 3);
// 	printf("%d\n", r);
// 	printf("%d\n", r2);
// 	return (0);
// }
