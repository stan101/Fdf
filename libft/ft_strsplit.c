/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 09:48:20 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/15 11:24:03 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	size_t	x;
	size_t	y;
	size_t	start;

	if (!s)
		return (0);
	ptr = (char**)malloc(sizeof(ptr) * ft_strlen(s));
	if (!ptr)
		return (NULL);
	x = 0;
	y = 0;
	while (x < ft_strlen(s))
	{
		while (s[x] && s[x] == c)
			x++;
		start = x;
		while (s[x] && s[x] != c)
			x++;
		if (start < x)
			ptr[y++] = ft_strsub(s, start, (x - start));
		ptr[y] = 0;
	}
	return (ptr);
}
