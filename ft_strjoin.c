/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:37 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/16 21:01:41 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, (char *)s1);
	ft_strcat(res, (char *)s2);
	return (res);
}

// int main(int argc, char const *argv[])
// {
// 	(void)argc;
// 	char *tmp = ft_strjoin(argv[1], argv[2]);
// 	if (!tmp)
// 		printf("hehe\n");
// 	else
// 	{
// 		printf("%s\n", tmp);
// 		free(tmp);
// 		printf("%s\n", tmp);
// 	}
// 	return (0);
// }
