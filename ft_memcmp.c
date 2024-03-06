/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:12:13 by jveirman          #+#    #+#             */
/*   Updated: 2023/10/30 13:02:24 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned int)str1[i] - (unsigned int)str2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main (void) {
// 	char str1[15];
// 	char str2[15];
// 	int ret;

// 	ft_memcpy(str1, "abcdef", 7);
// 	ft_memcpy(str2, "abcdeF", 7);

// 	ret = ft_memcmp(str1, str2, 7);

// 	printf("%d", ret);
// 	return (0);
// }
