/* ************************************************************************** */
/*	                                                                    */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveirman <jveirman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:09:12 by jveirman          #+#    #+#             */
/*   Updated: 2023/11/11 13:47:05 by jveirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst->content)
	{
		del(lst->content);
		lst->content = NULL;
	}
	free(lst);
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
// 	ft_lstdelone(node1, del);
// 	return (0);
// }
// int main(void) {
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
// 	node3->next = NULL;

// 	t_list *current = node1;
// 	while (current != NULL) {
// 		int *content = (int *)current->content;
// 		printf("Content: %d\n", *content);
// 		current = current->next;
// 	}
// 	ft_lstdelone(node2, del);
// 	current = node1;
// 	while (current != NULL) {
// 		int *content = (int *)current->content;
// 		printf("Content: %d\n", *content);
// 		current = current->next;
// 	}
// 	return 0;
// }
