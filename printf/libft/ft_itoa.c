/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:10:14 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/06 23:35:02 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_strnew(size_t size)
{
	char	*res;

	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}

static char	*res_define(char *res, int len, long n)
{
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	res[--len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[len--] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*res;
	int		len;

	num = n;
	len = numlen(num);
	res = ft_strnew(len + 1);
	if (!res)
		return (NULL);
	return (res_define(res, len, num));
}

// int main(int argc, char const *argv[])
// {
// 	#include <stdio.h>
// 	(void)argc;
// 	char *tmp = ft_itoa(atoi(argv[1]));
// 	printf("%s\n", tmp);
// 	free(tmp);
// 	return (0);
// }
