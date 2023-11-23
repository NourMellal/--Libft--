/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:55:36 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/06 23:01:13 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i] != sep && str[i] != '\0')
			&& (str[i + 1] == sep || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static char	*res_write(char *dest, const char *src, char sep)
{
	int	i;

	i = -1;
	while (!(src[++i] == sep || src[i] == '\0'))
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

static char	**free_res(char **res)
{
	int	i;

	if (res != NULL)
	{
		i = 0;
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
	}
	return (NULL);
}

static char	**res_define(char **res, const char *str, char sep)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i++;
		else
		{
			j = 0;
			while (!(str[i + j] == sep || str[i + j] == '\0'))
				j++;
			res[word] = malloc((sizeof(char) * j) + 1);
			if (!res[word])
				return (free_res(res));
			res_write(res[word], str + i, sep);
			i += j;
			word++;
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc((sizeof(char *) * (words + 1)));
	if (!res)
		return (NULL);
	res[words] = NULL;
	return (res_define(res, s, c));
}
