/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:24:43 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/30 18:50:52 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
