/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:29:36 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:29:40 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*new_str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > s_len - start)
		len = s_len - start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s + start, len);
	new_str[len] = '\0';
	return (new_str);
}

/*
int main(void)
{
    char *s1 = "Hello, world!";
    char *s2 = "Short";
    char *s3 = "";
    char *res1 = ft_substr(s1, 7, 5);
    char *res2 = ft_substr(s2, 2, 10);
    char *res3 = ft_substr(s3, 0, 5);

    printf("Test 1: %s\n", res1);
    printf("Test 1: %s\n", res2);
    printf("Test 1: %s\n", res3);

    free(res1);
    free(res2);
    free(res3);
    return 0;
}
*/
