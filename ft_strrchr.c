/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:31:49 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/06 18:19:29 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	char_to_find;
	char			*last_occurrence;

	last_occurrence = NULL;
	char_to_find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == char_to_find)
			last_occurrence = (char *)&s[i];
		i++;
	}
	if (char_to_find == '\0')
		return ((char *)&s[i]);
	return (last_occurrence);
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
