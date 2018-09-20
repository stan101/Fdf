/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:03:47 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/01 11:33:37 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t a;
	size_t b;

	a = 0;
	while (a < len && haystack[a] != '\0')
	{
		b = 0;
		while (a + b < len && haystack[a + b] == needle[b] && needle[b] != '\0')
			b++;
		if (needle[b] == '\0')
			return ((char *)haystack + a);
		a++;
	}
	return (NULL);
}
