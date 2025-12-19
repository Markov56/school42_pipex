/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:32:03 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:32:04 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			s_len;
	unsigned int	i;

	if (!s || !f)
		return ;
	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, s + i);
		i++;
	}
}
/*
static void	ft_test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c - 32;
}

int	main(void)
{
	char	str[] = "hello world";

	printf("before: %s\n", str);
	ft_striteri(str, ft_test);
	printf("after: %s\n", str);

	return (0);
}
*/
