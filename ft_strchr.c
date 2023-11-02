/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:32:20 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/02 18:45:38 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = (char *)s;
	i = ft_strlen(tmp);
	if (c == '\0')
		return (tmp + i);
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == (const char)c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *str = ft_strchr("Hello this is a test string", 'Z');
// 	if (!str)
// 		printf("(NULL)\n");
// 	else
// 		printf ("%s\n", str);
// 	return (0);
// }
