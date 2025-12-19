/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:53:29 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/13 20:51:28 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = (unsigned char) c;
	return (s);
}

/*
int main(void)
{
	char buf1[20] = "Hello, world!";
	char buf2[20] = "Hello, world!";

	//ft_memset
	ft_memset(buf1 + 7, '*', 5);
	//memset
	memset(buf2 + 7, '*', 5);

	printf("ft_memset result:  %s\n", buf1);
	printf("memset result:     %s\n", buf2);

	printf("\nByte comparison:\n");
	for (int i = 0; i < 20; i++)
		printf("buf1[%d] = %02x, buf2[%d] = %02x\n",
			i, (unsigned char)buf1[i], i, (unsigned char)buf2[i]);

	return (0);
}
*/