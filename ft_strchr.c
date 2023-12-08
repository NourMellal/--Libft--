/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:32:20 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/14 18:54:00 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_to_find;

	char_to_find = (char)c;
	while (*s)
	{
		if (*s == char_to_find)
			return ((char *)s);
		s++;
	}
	if (char_to_find == '\0')
		return ((char *)s);
	return (0);
}

// int main()
// {
// 	char *str = ft_strchr("Hello this is a test string", 'Z');
// 	if (!str)
// 		printf("(NULL)\n");
// 	else
// 		printf ("%s\n", str);
// 	return (0);
// }
