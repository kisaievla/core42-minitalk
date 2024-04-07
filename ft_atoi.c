/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:40:32 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/07 15:34:03 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	digit;
	int	sum;
	int	is_negative;

	is_negative = 1;
	sum = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			is_negative *= -1;
		}
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		digit = *str - '0';
		sum = sum * 10 + digit;
		str++;
	}
	return (sum * is_negative);
}
