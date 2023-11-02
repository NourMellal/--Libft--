/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:31:49 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/02 18:58:15 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;
	char	*last;

	if (!s)
		return (NULL);
	i = -1;
	tmp = (char *)s;
	last = NULL;
	while (tmp[++i])
	{
		if (tmp[i] == c)
			last = &tmp[i];
	}
	if (c == '\0')
		return (&tmp[i]);
	return (last);
}

// int main(void)
// {
// 	char *t = ft_strrchr("hello lolo", 'z');
// 	if (!t)
// 		printf("(nil)\n");
// 	else
// 		printf("%s\n", t);
// 	return (0);
// }
