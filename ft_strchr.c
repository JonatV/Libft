/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:58:56 by jveirman          #+#    #+#             */
/*   Updated: 2023/10/30 11:17:20 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int only)
{
	while (*str != '\0' && (char)only != *str)
		str++;
	if (*str == (char)only)
		return ((char *)str);
	return (0);
}
// #include <stdio.h>
// int main() {
//     const char *str = "teste";
//     int to_find = 'w';

//     char *result = ft_strchr(str, to_find);

//     if (result != NULL) {
//         printf("Char '%c' at pos: %ld\n", to_find, result - str);
//     } else {
//         printf("Char '%c' not in str.\n", to_find);
//     }
//     return 0;
// }
