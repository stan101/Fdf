/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 10:42:25 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/18 08:08:45 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	n;
	int		s;

	n = 0;
	s = 1;
	if (*str == '\0')
		return (0);
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		n = (n * 10) + (*str++ - '0');
		if (n < 0 && s == 1)
			return (-1);
		if (n < 0)
			return (0);
	}
	return (n * s);
}
