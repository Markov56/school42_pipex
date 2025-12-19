/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:06:40 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/20 16:00:45 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_ptr;

	i = 0;
	s_ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
			return ((void *)(s_ptr + i));
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	int arr[10] = {1, 2, 300000, 4, 5, 6, 7, 8};

	printf("res: %p\n", ft_memchr(arr, 0, sizeof(arr)));
	printf("c res: %p\n", memchr(arr, 0, sizeof(arr)));

	return (0);
}
*/