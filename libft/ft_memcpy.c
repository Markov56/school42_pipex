/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:17:27 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/16 16:17:29 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest1[20];
	char	dest2[20];
	void	*res1, *res2;

	res1 = ft_memcpy(dest1, src, 5);
	res2 = memcpy(dest2, src, 5);
	dest1[5] = '\0';
	dest2[5] = '\0';

	printf("my fn res: %s\nfrom lib res: %s\n", (char *)res1, (char *)res2);

	return 0;
}
*/