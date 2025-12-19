/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:57:52 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 15:57:54 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	new_node = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&head, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
/*
static void	del(void *content)
{
	free(content);
}

static void	print_list(t_list *lst)
{
	while(lst)
	{
		printf("content: %s\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	*ft_test(void *content)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup((char *)content);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return ((void *)str);
}

int	main()
{
	t_list	*new_list;
	t_list *head = NULL;
	t_list	*first = ft_lstnew(ft_strdup("first"));
	t_list	*second = ft_lstnew(ft_strdup("second"));
	t_list	*third = ft_lstnew(ft_strdup("third"));

	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);

	new_list = ft_lstmap(head, ft_test, del);
	print_list(new_list);

	return (0);
}
*/