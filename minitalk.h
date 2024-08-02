/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visaienk <visaienk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:11:49 by visaienk          #+#    #+#             */
/*   Updated: 2024/08/02 17:39:44 by visaienk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> //delete this before submission

// Utils
void	ft_write(char *s);
char	*ft_itoa(int nb);
int		ft_atoi(const char *str);
#endif