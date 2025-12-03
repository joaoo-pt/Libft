/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:02:15 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/14 15:49:39 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	ptr = (char *)s;
	str = malloc(ft_strlen(ptr) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		str[i] = f(i, ptr[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	x(unsigned int i, char c)
{
	if (i == 2) return ('X');
}

int	main(void)
{
	char *str = "012345";
	char *out;

	out = ft_strmapi(str, &x);
	
	printf("%s\n", out);
} */