/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:08:08 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/19 16:08:09 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	const char str[] = "hello world";
	char *ptr1 = ft_strrchr(str, 'v');
	char *ptr2 = strrchr(str, 'v');
	
	printf("my func: %s\n", ptr1);
	printf("c func: %s\n", ptr2);
	return (0);
}
*/