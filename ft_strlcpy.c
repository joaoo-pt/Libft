/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:18:09 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 14:56:38 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*
int	main(void)
{
	char src[] = "ola mundo";
	char dst[15];
	size_t retorno;

	retorno = ft_strlcpy(dst, src, 15);
	printf("Source: '%s'\n", src);
    printf("Dest: '%s'\n", dst);
	printf("Return : %zu\n", retorno);

	printf("\n");

	retorno = ft_strlcpy(dst, src, 5);

	printf("Source: '%s'\n", src);
    printf("Dest: '%s'\n", dst);
    printf("Return : %zu\n", retorno);
} */