/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:31:49 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/16 16:41:59 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			char_to_find;
	char			*last_occurrence;

	last_occurrence = NULL;
	char_to_find = (char)c;
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
