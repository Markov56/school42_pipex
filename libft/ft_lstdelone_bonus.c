/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:31:06 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:31:08 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	del(void *content)
{
	printf("Deleting content: %s\n", (char *)content);
	free(content);
}

int	main()
{
	t_list	*node = ft_lstnew(strdup("hello world"));

	printf("Before: %s\n", (char *)node->content);
	ft_lstdelone(node, del);

	return (0);
}
*/