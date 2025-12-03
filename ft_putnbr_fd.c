/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:03:06 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 16:26:57 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	write(fd, &"0123456789"[num % 10], 1);
}

/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd;

	fd = open("file.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		return (1);
	}

	ft_putnbr_fd(123, fd);
} */