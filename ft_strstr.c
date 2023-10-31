/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:53:12 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/15 18:50:39 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *fstr)
{
	size_t	i;
	size_t	j;

	if (*fstr == '\0')
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (fstr[j] == str[i + j])
			j++;
		if (fstr[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}

// // int main(void) {
// 	char *tst = ft_strstr("this is a test string", "test");
// 	if (!tst)
// 		printf("hh\n");
// 	else
// 		printf("%s\n", tst);
// }