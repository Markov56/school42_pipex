/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:36:57 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/19 15:36:59 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}

/*
int	main()
{
	const char str[] = "hello world";
	char *ptr1 = ft_strchr(str, 'l');
	char *ptr2 = strchr(str, 'l');
	
	printf("my func: %s\n", ptr1);
	printf("c func: %s\n", ptr2);
	
	return (0);
}
*/