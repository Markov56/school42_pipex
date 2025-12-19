/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:29:51 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:29:52 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_count(long int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count++;
		nbr *= -1;
	}
	while (nbr)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

static char	*ft_format_result(char *str, long num, int count)
{
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[count--] = '\0';
	while (num > 0)
	{
		str[count--] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	num;
	int			char_count;

	num = n;
	char_count = ft_char_count(num);
	result = (char *)malloc(sizeof(char) * (char_count + 1));
	if (!result)
		return (NULL);
	return (ft_format_result(result, num, char_count));
}
/*
#include <limits.h>
int	main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(INT_MAX));
	return (0);
}
*/
