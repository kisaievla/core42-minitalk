/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:49:07 by visaienk          #+#    #+#             */
/*   Updated: 2024/08/02 17:38:38 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sigusr1_handler(int sig)
{
	static unsigned char	current_char;
	static int				bit_index;

	current_char |= (sig == SIGUSR1);
	bit_index++;
	if (bit_index == 8)
	{
		if (current_char == 0)
			write(1, "\n", 1);
		else
			write(1, &current_char, 1);
		bit_index = 0;
		current_char = 0;
	}
	else
		current_char <<= 1;
}

int	main(void)
{
	int					pid;
	char				*pids;
	struct sigaction	s_sa;

	s_sa.sa_handler = &sigusr1_handler;
	sigaction(SIGUSR1, &s_sa, NULL);
	sigaction(SIGUSR2, &s_sa, NULL);
	pid = getpid();
	pids = ft_itoa(pid);
	ft_write(pids);
	free(pids);
	while (42)
		pause();
	return (0);
}
