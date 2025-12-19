/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:28:19 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:28:24 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
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

	printf("size: %d\n", ft_lstsize(head));
	return (0);
}
*/