/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:53:10 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/11 16:53:39 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main(void)
// {
// 	t_list node1 = {0, 0};
// 	t_list node2 = {0, 0};
// 	t_list node3 = {"last", 0};

// 	node1.next = &node2;
// 	node2.next = &node3;

// 	t_list *lst_tail = ft_lstlast(&node1);
// 	printf("%s", (char *)lst_tail->content);
// 	return (0);
// }
