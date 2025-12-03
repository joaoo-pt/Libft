/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorreia <jcorreia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:03:00 by jcorreia          #+#    #+#             */
/*   Updated: 2025/11/12 16:26:21 by jcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
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

	ft_putendl_fd("teste 123 com end line", fd);
} */