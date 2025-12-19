/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:27:59 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:28:01 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	t_list *head = NULL;
	t_list	*first = ft_lstnew(ft_strdup("first"));
	t_list	*second = ft_lstnew(ft_strdup("second"));
	t_list	*third = ft_lstnew(ft_strdup("third"));

	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);

	printf("last: %s\n", (char *)ft_lstlast(head)->content);
	free(first);
	free(second);
	free(third);
	return (0);
}
*/