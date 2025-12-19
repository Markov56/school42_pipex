/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:29:15 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:29:18 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!result)
		return (NULL);
	while (i < s_len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[s_len] = '\0';
	return (result);
}
/*
static char	ft_test(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*input = "hello world";
	char	*result = ft_strmapi(input, ft_test);

	if (result)
	{
		printf("Original: %s\n", input);
		printf("Modified: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
}
*/
