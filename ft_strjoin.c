/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:31:33 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/13 18:03:42 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = malloc(s1_len + s2_len + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, s1_len + 1);
	ft_strlcat(join, s2, s1_len + s2_len + 1);
	return (join);
}

/*
int	main(void)
{
	char *join = ft_strjoin("ju", "ju");

	printf("%s\n", join);
} */