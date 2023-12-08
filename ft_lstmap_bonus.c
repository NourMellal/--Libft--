/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:50:22 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/07 00:12:44 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*f(void *cont)
// {
// 	int *n = malloc(sizeof(int));
// 	*n = 2 * (*(int *)cont);
// 	return (n);
// }

// void	free_cont(void	*cont)
// {
// 	(void)cont;
// }

// void	real_free(void	*cnt)
// {
// 	free(cnt);
// }

static void	cleanup_on_fail(t_list **new_list, void *content,
		void (*del)(void *))
{
	if (content)
		del(content);
	if (new_list)
		ft_lstclear(new_list, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst && f && del)
	{
		content = f(lst->content);
		if (!content)
		{
			cleanup_on_fail(&new_list, NULL, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			cleanup_on_fail(&new_list, content, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// int main(void)
// {
// 	int a = 1, b = 2, c = 3;  // Use actual integer variables
// 	t_list	*head = ft_lstnew(&a);  // Pass address of the variable
// 	ft_lstadd_back(&head, ft_lstnew(&b));  // Pass address of the variable
// 	ft_lstadd_back(&head, ft_lstnew(&c));  // Pass address of the variable

// 	t_list	*new_list = ft_lstmap(head, f, free_cont);
// 	t_list *tmp = new_list;
// 	while (tmp)
// 	{
// 		printf("%d ", *(int *)(tmp->content));
// 		tmp = tmp->next;
// 	}
// 	printf("\n");

// 	// Don't forget to free the memory!
// 	ft_lstclear(&head, free_cont);
// 	ft_lstclear(&new_list, real_free);

// 	return (0);
// }
