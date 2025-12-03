/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:22:40 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 17:35:55 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list *node;
	t_list *node2;

	node = ft_lstnew("eu");
	node2 = ft_lstnew("perdi");

	ft_lstadd_front(&node, node2);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", node2->next->content);
	free(node);
	free(node2);
} */