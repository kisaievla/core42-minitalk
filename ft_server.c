/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:49:07 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/07 10:19:27 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int	pid;
	char	*pids;
	
	pid = getpid();
	pids = ft_itoa(pid);
	ft_write(pids);
	free(pids);
	pause();
	// On signal, open the file and read text from it
}
