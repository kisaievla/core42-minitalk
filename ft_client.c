/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:34:11 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/03 17:40:56 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	else
		ft_write(argv[argc - 1]);
}
