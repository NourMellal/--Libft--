/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:52:50 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/06 22:32:14 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*res;

	res = malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	ft_bzero(res, size + 1);
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	size_t	sublen;

	if (!s)
		return (NULL);
	sublen = ft_strlen(s);
	if (start >= sublen)
		return (ft_strnew(0));
	if (len > sublen - start)
		len = sublen - start;
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
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