/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:24:24 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/06 22:51:47 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(int c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_strnew(size_t size)
{
	char	*res;

	res = malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	ft_bzero(res, size + 1);
	return (res);
}

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = len;
	while (a != len && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
		b--;
	}
	while (b != 0)
	{
		dst[a] = '\0';
		a++;
		b--;
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strnew(0));
	start = 0;
	while (s1[start] && whitespace(s1[start], set))
		start++;
	while (end > start && whitespace(s1[end - 1], set))
		end--;
	res = ft_strnew((size_t)(end - start));
	if (!res)
		return (NULL);
	return (ft_strncpy(res, &s1[start], (size_t)(end - start)));
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		char *tmp = ft_strtrim(av[1], av[2]);
// 		if (tmp)
// 		{
// 			for (int i = 0; tmp[i]; i++)
// 			{
// 				putchar(tmp[i]);
// 			}
// 			free(tmp);
// 		}
// 		else
// 			printf("NULL");
// 	}
// 	printf("\n");
// 	return (0);
// }