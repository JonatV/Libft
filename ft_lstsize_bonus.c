/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:15:04 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/11 12:32:20 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		if (count == 2147483647)
		{
			ft_putstr_fd("Int max limit reached.", 1);
			return (2147483647);
		}
		count++;
		lst = lst->next;
	}
	return (count);
}
// int main(void)
// {
// 	t_list node1 = {0, 0};
// 	t_list node2 = {0, 0};
// 	t_list node3 = {0, 0};

// 	node1.next = &node2;
// 	node2.next = &node3;

// 	int	size = ft_lstsize(&node1);
// 	printf("%d", size);
// 	return (0);
// }
