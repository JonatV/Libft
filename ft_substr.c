/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:33:00 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/13 13:42:14 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

//  #include <stdio.h>
//  int	main(void)
//  {
//  	printf("%s\n", ft_substr("Ventouse", 1, 5));
//  	printf("%s\n", ft_substr("Baby", 2, 5));
//  	printf("%s\n", ft_substr("Aliens", 2, 4));
//  	printf("%s\n", ft_substr("Lorem ipsum", 0, 10));
//  	printf("%s\n", ft_substr("Lorem ipsum", 400, 20));
// 		printf("%s\n", ft_substr("tripouille", 0, 42000));
//  }
