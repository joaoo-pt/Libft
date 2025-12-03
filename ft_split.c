/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:44:11 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 16:39:57 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	words;
	int	in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

char	*copy_word(const char *str, char c)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	free_split(char **split, int j)
{
	while (j > 0)
	{
		j--;
		free(split[j]);
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = copy_word(s, c);
			if (!split[i])
				return (free_split(split, i), NULL);
			while (*s && *s != c)
				s++;
			i++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

/*
int	main(void)
{
	char *s = "teste do split";
	char c = ' ';
	char **res = ft_split(s, c);
	
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n", res[2]);
} */