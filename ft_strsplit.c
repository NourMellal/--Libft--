/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:13:43 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/30 20:35:04 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(int c, int sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(const char *str, int c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_sep(str[i], c) && is_sep(str[i + 1], c))
			words++;
		i++;
	}
	return (words);
}

static char	*res_write(char *dest, const char *src, char c)
{
	int	i;

	i = -1;
	while (!is_sep(src[++i], c))
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

static char	**res_define(char **res, const char *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (is_sep(str[i], c))
			i++;
		else
		{
			j = 0;
			while (!is_sep(str[i + j], c))
				j++;
			res[word] = malloc((sizeof(char) * j) + 1);
			if (!res[word])
				return (NULL);
			res_write(res[word], str + i, c);
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

	words = count_words(s, c);
	res = malloc((sizeof(char *) * words) + 1);
	if (!res)
		return (NULL);
	res[words] = NULL;
	return (res_define(res, s, c));
}
// int main(void)
// {
// 	char	**res = ft_strsplit(",,,,,,,,,,hello         world,,,,,,,", ' ');
// 	for (int i = 0; res[i]; i++)
// 		printf("%s\n", res[i]);
// 	for (int i = 0; res[i]; i++)
// 		free(res[i]);
// 	free(res);
// 	return (0);
// }
