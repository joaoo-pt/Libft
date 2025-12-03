/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:41:20 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 18:09:17 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void print(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *lst = ft_lstnew("nsei");
	
	ft_lstadd_back(&lst, ft_lstnew("..."));
	ft_lstiter(lst, print);
} */