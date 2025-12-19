/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:14:02 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/21 16:14:07 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	sum;

	i = 0;
	sum = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		sum = dest_len + src_len;
	else
		return (src_len + size);
	while (src[i] && dest_len < size - 1)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (sum);
}

/*
int	main()
{
	char src[] = ", world!";
	char dest[20] = "hello";

	char src1[] = ", world!";
	char dest1[20] = "hello";

	printf("my func: return: %zu dest: %s\n", ft_strlcat(dest, src, 3), dest);
	printf("c func: return: %zu dest: %s\n", strlcat(dest1, src1, 3), dest1);

	return (0);
}
*/
