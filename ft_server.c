/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:49:07 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/05 19:41:18 by visaienk         ###   ########.fr       */
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
}
