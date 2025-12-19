/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:31:22 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:31:24 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	char	*text = "Hello, world!";
	t_list	*node;

	node = ft_lstnew(text);
	if (node)
	{
		printf("Content: %s\n", (char *)node->content);
		if (node->next == NULL)
			printf("Next is NULL\n");
		else
			printf("Next isn't NULL\n");
	}
	else
	{
		printf("no node\n");
	}
	return (0);
}
*/
