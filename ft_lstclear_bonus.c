/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:26:14 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/13 19:40:07 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// void	del(void *node)
// {
// 	free(node);
// }
// int	main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	int *content1;
// 	int *content2;
// 	int *content3;

// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));

// 	content1 = (int *)malloc(sizeof(int));
// 	content2 = (int *)malloc(sizeof(int));
// 	content3 = (int *)malloc(sizeof(int));

// 	*content1 = 123;
// 	*content2 = 456;
// 	*content3 = 789;

// 	node1->content = content1;
// 	node2->content = content2;
// 	node3->content = content3;

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = 0;

// 	t_list *current = node1;
// 	while (current != NULL) {
// 		int *content = (int *)current->content;
// 		printf("Content: %d\n", *content);
// 		current = current->next;
// 	}
// 	ft_lstclear(&node2, del);
//     node1->next = NULL;
// 	current = node1;
// 	while (current != NULL) {
// 		int *content = (int *)current->content;
// 		printf("Content: %d\n", *content);
// 		if (current->next == 0)
// 			break;
// 		current = current->next;
// 	}
// 	return (0);
// }
