/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 09:51:43 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/06 09:27:14 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				z;
	unsigned char	*a1;
	unsigned char	*a2;

	z = 0;
	a1 = (unsigned char *)dst;
	a2 = (unsigned char *)src;
	while (z < (int)n)
	{
		a1[z] = a2[z];
		if (a2[z] == (unsigned char)c)
		{
			a1[z] = a2[z];
			z++;
			return ((void *)a1 + z);
		}
		z++;
	}
	return (0);
}
