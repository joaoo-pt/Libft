/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:30 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 14:55:58 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*
#include <string.h>

int	main(void)
{
    const char *str = "teste";

    printf("%s\n", strchr(str, 'j'));
    printf("%s\n", ft_strchr(str, 'j'));

} */