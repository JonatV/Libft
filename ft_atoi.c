/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:53:51 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/11 14:58:39 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
		result = result * 10 + str[i++] - '0';
	if (result > 9223372036854775807ULL)
	{
		if (sign < 0 && result == 9223372036854775808ULL)
			return (0);
		return (-1);
	}
	return (result * sign);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("-45674"));
// 	printf("%d", atoi("-45674"));
// }
