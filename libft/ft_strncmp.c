/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:32:17 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/19 16:32:19 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "abc";
	char s2[] = "abc";
	char s3[] = "";
	char s4[] = "hello, world";
	char s5[] = "zac";

	printf("my func: abc / abc: %d\n", ft_strncmp(s1, s2, 5));
	printf("my func: abc / emply line: %d\n", ft_strncmp(s1, s3, 5));
	printf("my func: abc / zac: %d\n", ft_strncmp(s1, s5, 3));
	printf("my func: hello world zac: %d\n", ft_strncmp(s4, s5, 20));

	printf("c func: abc / abc: %d\n", strncmp(s1, s2, 5));
	printf("c func: abc / emply line: %d\n", strncmp(s1, s3, 5));
	printf("c func: abc / zac: %d\n", strncmp(s1, s5, 3));
	printf("c func: hello world zac: %d\n", strncmp(s4, s5, 20));

	printf("my func: %d\nc func: %d\n",
	 ft_strncmp("abc", "abcd", 20), strncmp("abc", "abcd", 20));

	return (0);
}
*/