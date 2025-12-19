/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:31:29 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/19 15:31:32 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main()
{
	printf("my func: %c\n", ft_tolower('a'));
	printf("std func: %c\n", tolower('a'));
	return (0);
}
*/