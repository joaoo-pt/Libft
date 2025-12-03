/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:39:30 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/13 18:20:33 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

/* int main()
{
	t_list *lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("idk")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup(":)")));

	ft_lstclear(&lst, free);

	if (lst == NULL)
		printf("sucesso");
} */