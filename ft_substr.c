/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:52:50 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/30 19:58:08 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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