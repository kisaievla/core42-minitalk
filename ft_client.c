/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:34:11 by visaienk          #+#    #+#             */
/*   Updated: 2024/08/02 17:40:08 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_signal(int pid, unsigned char c)
{
	int				i;
	unsigned char	tmp_c;

	i = 8;
	while (i > 0)
	{
		i--;
		tmp_c = c >> i;
		if (tmp_c % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(742);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		ft_write("Some args are missing");
	else
	{
		while (*(argv[argc - 1]))
		{
			send_signal(ft_atoi(argv[argc - 2]), *(argv[argc - 1]));
			(argv[argc - 1])++;
		}
		send_signal(ft_atoi(argv[argc - 2]), '\0');
	}
	return (0);
}
