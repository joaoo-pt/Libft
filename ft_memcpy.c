/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:20 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/14 15:48:39 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
    char *src = "teste rapido aqui";
    char dest[30];

    char *srcc = "teste rapido aqui";
    char destt[30];

    ft_memcpy(dest, src, 0);
    memcpy(destt, srcc, 0);

    printf("%s\n", dest);

    printf("%s\n", destt);
} */