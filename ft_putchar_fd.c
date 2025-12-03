/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:50:13 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 16:18:14 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd;

	fd = open("teste.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		return (1);
	}

	ft_putchar_fd('4', fd);
	ft_putchar_fd('2', fd);
	ft_putchar_fd('\n', fd);

	close(fd);
} */