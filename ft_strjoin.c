/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:37 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/14 18:04:14 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *s1, const char *s2)
{
	char	*s1alt;

	s1alt = s1;
	while (*s1alt != '\0')
		s1alt++;
	while (*s2 != '\0')
	{
		*s1alt = *s2;
		s1alt++;
		s2++;
	}
	*s1alt = '\0';
	return (s1);
}

static char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*res;

	if (!s1 || !s2)
	{
		if (!s1 && s2)
			return (ft_strdup(s2));
		else if (s1 && !s2)
			return (ft_strdup(s1));
		else
			return (NULL);
	}
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
