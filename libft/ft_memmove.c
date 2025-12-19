/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:56:34 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/16 17:56:36 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

/*
int main(void)
{
	char str1[20] = "Hello, memmove!";
	char str2[20] = "Hello, memmove!";

	printf("Before ft_memmove:\nstr1: %s\n", str1);
	ft_memmove(str1 + 7, str1, 6);
	printf("After ft_memmove:\nstr1: %s\n\n", str1);

	printf("Before native memmove:\nstr2: %s\n", str2);
	memmove(str2 + 7, str2, 6);
	printf("After native memmove:\nstr2: %s\n\n", str2);

	//(hex)
	printf("Byte by byte comparison:\n");
	for (int i = 0; i < 20; i++)
		printf("ft_memmove[%d] = %02x, memmove[%d] = %02x\n", 
		       i, (unsigned char)str1[i], i, (unsigned char)str2[i]);

	return 0;
}
*/
