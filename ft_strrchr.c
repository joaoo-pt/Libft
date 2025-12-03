/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:18:48 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 15:01:11 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*last;

	ch = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == ch)
			last = (char *)s;
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return (last);
}

/*
int	main(void)
{
	char str[] = "teste de teste";

	printf("%s\n", ft_strrchr(str, 't'));

	printf("%s\n", ft_strrchr(str, 'z'));

	printf("%s\n", ft_strrchr(str, '\0'));
} */