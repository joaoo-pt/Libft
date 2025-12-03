/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:32:55 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/07 14:43:11 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	i = count_digits(num);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i--;
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (str);
}

/*
int	main(void)
{
    printf("%d\n", count_digits(-123));

    char *str = ft_itoa(-123);

    printf("%s\n", str);
} */