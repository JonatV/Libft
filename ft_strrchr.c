/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:53:31 by jveirman          #+#    #+#             */
/*   Updated: 2023/10/30 13:56:43 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int only)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0 && (char)only != str[i])
		i--;
	if (str[i] == (char)only)
		return ((char *)&str[i]);
	return (0);
}
// #include <stdio.h>
// int main() {
//     const char *str = "teste";
//     int to_find = 'e';

//     char *result = ft_strrchr(str, to_find);

//     if (result != NULL) {
//         printf("Char '%c' at pos: %ld\n", to_find, result - str);
//     } else {
//         printf("Char '%c' not in str.\n", to_find);
//     }
//     return 0;
// }
