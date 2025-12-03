/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:52 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/14 15:41:11 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <string.h>

int	main(void)
{
	char src[] = "Mundo";
	char dst[20];
	size_t retorno;

	strcpy(dst, "Ola ");

	retorno = ft_strlcat(dst, src, 20);

	printf("%s\n", src);
    printf("dest: '%s'\n", dst);
    printf("%zu\n", retorno);

	strcpy(dst, "Ola ");

	retorno = ft_strlcat(dst, src, 8);

	printf("%s\n", src);
    printf("dest: '%s'\n", dst);
    printf("%zu\n", retorno);
} */