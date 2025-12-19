/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:53:39 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/15 21:27:26 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char test1[] = "Hello, World!";
	char test2[] = "Hello, World!";

	ft_bzero(test1 + 7, 6);
	bzero(test2 + 7, 6);

	printf("ft_bzero: %s\n", test1);
	printf("bzero   : %s\n", test2);

	printf("\nByte dump (ft_bzero): ");
	for (int i = 0; i < 13; i++)
		printf("%02x ", (unsigned char)test1[i]);
	printf("\n");

	return (0);
}
*/
