/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:12:04 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/21 18:12:05 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_str;
	size_t	s_len;

	s_len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int	main(void)
{
	const char *src = "Hello, world!";
	char *dup1 = ft_strdup(src);
	char *dup2 = strdup(src);

	if (!dup1 || !dup2)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Original string: %s\n", src);
	printf("ft_strdup result: %s\n", dup1);
	printf("strdup result:    %s\n", dup2);

	if (strcmp(dup1, dup2) == 0)
		printf("Test passed: strings match\n");
	else
		printf("Test failed: strings differ\n");

	free(dup1);
	free(dup2);

	return (0);
}
*/