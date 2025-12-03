/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:27:07 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 17:39:43 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int main()
{
	t_list *lst = ft_lstnew("first node");

	ft_lstadd_back(&lst, ft_lstnew("idk"));
	ft_lstadd_back(&lst, ft_lstnew(":)"));
	printf("%d\n", ft_lstsize(lst));
} */