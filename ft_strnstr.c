/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:03:03 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/17 18:44:43 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || (!haystack && n == 0))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {

// 	printf("%s\n", ft_strnstr(NULL, "hhh", 0));
// 	printf("%s\n", strnstr(NULL, "hghj", 0));
// 	// printf("%s\n", strnstr("Hhh", NULL, 0));
// 	return (0);
// }
