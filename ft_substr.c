/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:52:50 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/02 14:42:11 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	res = ft_strnew(len);
	if (!res || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
// int main(void) {
// 	char *test = ft_strsub(NULL, 5 + 3, 50);
// 	if (!test)
// 		printf("heheh\n");
// 	else
// 		printf("%s\n", test);
// 	return (0);
// }