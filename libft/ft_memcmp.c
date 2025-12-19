/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:13:40 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/21 16:13:42 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_p;
	const unsigned char	*s2_p;

	s1_p = (const unsigned char *)s1;
	s2_p = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1_p != *s2_p)
			return (*s1_p - *s2_p);
		s1_p++;
		s2_p++;
	}
	return (0);
}

/*
int	main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello, World!";

	printf("my func: %d\n", ft_memcmp(str1, str2, 13));
	printf("c func: %d\n", memcmp(str1, str2, 13));

	int arr1[] = {1, -2, 3, 4};
	int arr2[] = {1, -2, 3, 5};

	printf("my func (int array): %d\n", ft_memcmp(arr1, arr2, sizeof(arr1)));
	printf("c func (int array): %d\n", memcmp(arr1, arr2, sizeof(arr1)));

	return 0;
}
*/
