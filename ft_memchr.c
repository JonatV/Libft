/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:28:33 by jveirman          #+#    #+#             */
/*   Updated: 2023/10/30 11:45:27 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
// int main()
// {
// 	unsigned char	values[10] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
// 	unsigned char	*pos = (unsigned char *)ft_memchr(values, 3, 10);
// 	if (pos)
// 		printf("3 at pos %ld.\n", pos - values);
// 	else
// 		printf("No 3.\n");
// 	return (0);
// }
