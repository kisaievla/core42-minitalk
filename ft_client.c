/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:34:11 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/07 16:13:38 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	str_size(char *s)
{
	int	size;

	size = 0;
	while (*s)
	{
		size++;
		s++;
	}
	size++;
	return (size);		
}

int	main(int argc, char **argv)
{
	int fd;

	if (argc != 3)
		ft_write("Some args are missing");
	else
	{
		fd = open("buffer.txt", O_WRONLY);
		write(fd, argv[argc - 1],  str_size(argv[argc - 1]));
		close(fd);
		kill(ft_atoi(argv[argc - 2]), SIGUSR1);
	}
}
