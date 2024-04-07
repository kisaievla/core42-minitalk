/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:49:07 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/07 16:11:28 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sigusr1_handler(int sig)
{
	ft_write("Signal received");
	sig = sig + 5;
}

int	main(void)
{
	int	pid;
	char	*pids;
	struct	sigaction s_sa;

	s_sa.sa_handler = &sigusr1_handler;
	sigaction(SIGUSR1, &s_sa, NULL);
	pid = getpid();
	pids = ft_itoa(pid);
	ft_write(pids);
	free(pids);
	pause();
	
}
