/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:35 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/10 15:14:49 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	if (!s1[0])
		return (ft_calloc(1, sizeof(char)));
	start = 0;
	while (s1[start] && is_in(s1[start], ((char *)set)))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in(s1[end - 1], ((char *)set)))
		end--;
	trimmed = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

// #include <stdio.h>
// int main() {
// 	char	*s0 = ft_strtrim(" \t \t \n    \n\n\n\t", " \n\t");
// 	char	*s1 = ft_strtrim("hey there", "");
// 	char	*s2 = ft_strtrim("", " 05");
// 	char	*s3 = ft_strtrim("", "");
// 	printf("%s\n", s0);
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	printf("%s\n", s3);
// }
