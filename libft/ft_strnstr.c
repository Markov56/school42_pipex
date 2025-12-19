/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:13:20 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/21 16:13:24 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && i + j < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	printf("my func: %s\n", ft_strnstr("Hello world", "world", 11));
	printf("c func:    %s\n", strnstr("Hello world", "world", 11));

	printf("my func: %s\n", ft_strnstr("Hello world", "lo", 5));
	printf("c func:    %s\n", strnstr("Hello world", "lo", 5));

	printf("my func: %s\n", ft_strnstr("Hello world", "", 5));
	printf("c func:    %s\n", strnstr("Hello world", "", 5));

	printf("my func: %s\n", ft_strnstr("Hello world", "world", 5));
	printf("c func:    %s\n", strnstr("Hello world", "world", 5));

	return (0);
}
*/
