/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:41:53 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/10 16:59:01 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len_n(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	len_n;
	char			*str;

	len_n = ft_len_n(n);
	str = malloc(sizeof(char) * (len_n + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[len_n--] = '\0';
	while (n != 0)
	{
		str[len_n] = ((unsigned int)n % 10) + '0';
		n = ((unsigned int)n) / 10;
		len_n--;
	}
	return (str);
}

// int main(void) {
//     char *array0;
//     int num = -2147483648;
//     array0 = ft_itoa(num);
//     printf("ft_itoa: %s\n", array0);
//     free(array0);
//     return 0;
// }
