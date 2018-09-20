/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:05:08 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/11 10:03:32 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1s;
	unsigned char	*s2s;
	size_t			i;

	i = 0;
	s1s = (unsigned char *)s1;
	s2s = (unsigned char *)s2;
	while (i < n)
	{
		if (s1s[i] != s2s[i])
			return (s1s[i] - s2s[i]);
		i++;
	}
	return (0);
}
