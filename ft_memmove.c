/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:17:23 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 14:05:32 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <string.h>

int	main(void)
{
	char ft_buffer[20];
	char buffer[20];

	strcpy(ft_buffer, "0123456789");
	strcpy(buffer, "0123456789");

	ft_memmove(ft_buffer + 2, ft_buffer, 5);
	memmove(buffer + 2, buffer, 5);

	printf("ft: %s\n", ft_buffer);
	printf("normal: %s\n", buffer);
} */