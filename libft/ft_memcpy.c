/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:30:53 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/01 10:47:56 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t j;

	j = 0;
	while (j < n)
	{
		*((char *)dst + j) = *((char *)src + j);
		j++;
	}
	return (dst);
}
