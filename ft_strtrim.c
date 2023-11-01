/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:24:24 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/01 11:28:07 by nmellal          ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (end < 0)
		return (ft_strnew(1));
	start = 0;
	while (whitespace(s1[start], set))
		start++;
	if (start - 1 == end)
		return (ft_strnew(1));
	while (whitespace(s1[end], set))
		end--;
	res = ft_strnew(end - start + 1);
	if (!res)
		return (NULL);
	return (ft_strncpy(res, &s1[start], end - start + 1));
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