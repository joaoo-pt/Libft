/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:44:03 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/13 18:25:14 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			if (del)
				del(content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* void del(void *content)
{
	free(content);
}

void    *copia_string(void *content)
{
    return ((void *)ft_strdup((char *)content));
}

int main(void)
{
    t_list  *original_list = NULL;
    t_list  *nova_lista;

    ft_lstadd_back(&original_list, ft_lstnew(ft_strdup("ola")));
    ft_lstadd_back(&original_list, ft_lstnew(ft_strdup("mundo")));

    nova_lista = ft_lstmap(original_list, &copia_string, &del);

    printf("%s\n", (char *)nova_lista->content);
    printf("%s\n", (char *)nova_lista->next->content);
    
    ft_lstclear(&original_list, &del);
    ft_lstclear(&nova_lista, &del);
} */