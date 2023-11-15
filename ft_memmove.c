/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:17:51 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/14 18:44:17 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*tmp2;

	tmp = (unsigned char *)dest;
	tmp2 = (const unsigned char *)src;
	if (tmp == tmp2)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		tmp[n] = tmp2[n];
	return (dest);
}

/* {1, 2, 3, 4, 5, 6}
	dest = 0x00650
	src = 0x00550
   dest = &arr[6], src = &arr[0] */

// int	main(void)
// {
// 	char arr[30] = "ABCDEFGHIJK";
// 	ft_memmove(&arr[0], &arr[3], 3 * sizeof(char));
// 	printf("%s\n", arr);
// 	return (0);
// }
