/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:27 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 13:35:30 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ch = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = ch;
		ptr++;
		n--;
	}
	return (s);
}

/*
int	main(void)
{
    char a1[] = "abcd";
    char a2[] = "abcd";

    
    printf("libc : %s\n", (char*)memset(a1, 'a', 3));
    printf("ft   : %s\n", (char*)ft_memset(a2, 'a', 3));
    
    char b1[] = "abcd", b2[] = "abcd";
    memset(b1, 'x', 0);
    ft_memset(b2, 'x', 0);
    printf("n=0  libc:%s | ft:%s\n", b1, b2);


    char c1[] = "abcd", c2[] = "abcd";
    memset(c1, '\0', 2);
    ft_memset(c2, '\0', 2);
    printf("zeros libc:\"%s\" | ft:\"%s\"\n", c1, c2);

    return (0);
} */