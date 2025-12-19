/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:53:17 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/21 16:53:19 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	sum = nmemb * size;
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_bzero(p, sum);
	return (p);
}

/*
void test_calloc(const char *name, void *(*calloc_func)(size_t, size_t)) {
	printf("=== %s ===\n", name);

	int *arr = (int *)calloc_func(5, sizeof(int));
	if (!arr) {
		printf("Test 1 failed: returned NULL\n");
	} else {
		int ok = 1;
		for (int i = 0; i < 5; i++) {
			if (arr[i] != 0) {
				ok = 0;
				break;
			}
		}
		printf("Test 1 %s\n", ok ? "passed" : "failed");
		free(arr);
	}

	int *arr0 = (int *)calloc_func(0, sizeof(int));
	printf("Test 2: returned %s\n", (arr0 == NULL)
		? "NULL or valid pointer (both OK)" : "valid pointer");
	free(arr0);

	void *big = calloc_func(SIZE_MAX, SIZE_MAX);
	printf("Test 3: %s\n", (big == NULL)
		 ? "passed (NULL returned)" : "failed (not NULL)");
	free(big);

	char *s = (char *)calloc_func(10, sizeof(char));
	if (!s) {
		printf("Test 4 failed: returned NULL\n");
	} else {
		int ok = 1;
		for (int i = 0; i < 10; i++) {
			if (s[i] != '\0') {
				ok = 0;
				break;
			}
		}
		printf("Test 4 %s\n", ok ? "passed" : "failed");
		free(s);
	}

	printf("\n");
}

int main(void) {
	test_calloc("Native calloc", calloc);
	test_calloc("Custom ft_calloc", ft_calloc);
	return 0;
}
*/
