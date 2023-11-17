/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:52:57 by prossi            #+#    #+#             */
/*   Updated: 2023/11/17 18:10:18 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!dst && size == 0) || size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main () {
// 	char dst[] = "fads";
// 	printf("%zu\n", ft_strlcat(NULL, NULL, 0));
// 	printf("%zu\n", strlcat(NULL, NULL, 0));
// }
