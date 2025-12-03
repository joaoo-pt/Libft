/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:16:01 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 13:44:43 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
    char s1[] = "teste";
    char s2[] = "teste";

    bzero(s1, 5);
    ft_bzero(s2, 5);

    printf("bzero : \"%s\"\n", s1);
    printf("ft_bzero : \"%s\"\n", s2);

    // teste em hexadecimal
    for (int i = 0; i < 6; i++)
        printf("s1[%d]=%02X s2[%d]=%02X\n", i, (unsigned char)s1[i], i,
		(unsigned char)s2[i]);

} */