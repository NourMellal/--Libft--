/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:55:24 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/16 19:12:32 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}

// void test(char *s)
// {
// 	while (*s != '\0')
// 	{
// 		*s -= 32;
// 		putchar(*s);
// 		s++;
// 	}
// 	putchar('\n');
// }

// int main(void) {
// 	char str[] = "lharba hh";
// 	ft_striter(str, &test);
// 	printf("%s\n", str);
// 	return (0);
// }