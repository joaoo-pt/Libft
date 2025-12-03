/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:16:35 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/14 15:27:07 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (size != 0 && nmemb > INT_MAX / size)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, size * nmemb);
	return (s);
}

/*
int	main(void)
{
    return (0);
}*/