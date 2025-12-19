/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:27:35 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:27:37 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	*lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	char	*str1 = strdup("Hello");
	char	*str2 = strdup("World");

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node1->next = node2;
	head = node1;

	printf("Before ft_lstclear:\n");
	printf("Node 1: %s\n", (char *)head->content);
	printf("Node 2: %s\n", (char *)head->next->content);

	ft_lstclear(&head, del);

	printf("After ft_lstclear:\n");
	if (head == NULL)
		printf("List cleared successfully.\n");
	else
		printf("List not cleared properly.\n");

	return 0;
}
*/