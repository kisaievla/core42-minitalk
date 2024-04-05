/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:52:57 by visaienk          #+#    #+#             */
/*   Updated: 2024/04/05 19:39:08 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_n_digits(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_reverse(char *s, size_t len)
{
	char	tmp;
	size_t	i;

	i = 0;
	while (i <= len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		i++;
	}
	s[len + 1] = '\0';
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	n_digits;
	size_t	i;
	int	tmp;

	tmp = n;
	n_digits = ft_n_digits(tmp);
	itoa = (char *)malloc((n_digits + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	i = 0;
	if (n < 0)
		n *= -1;
	while (i < n_digits)
	{
		itoa[i++] = (n % 10) + '0';
		n = n / 10;
	}
	ft_reverse(itoa, n_digits - 1);
	if (tmp < 0)
		itoa[0] = '-';
	return (itoa);
}
