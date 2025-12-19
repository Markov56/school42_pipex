/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:20:24 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/19 15:20:26 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int	main()
{
	printf("my func: %c\n", ft_toupper('B'));
	printf("std func: %c\n", toupper('B'));
	return (0);
}
*/