/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:22:40 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/16 19:26:24 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	if (!s || !f)
		return (NULL);
	res = ft_strnew(ft_strlen(s));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = (*f)(s[i]);
	return (res);
}
