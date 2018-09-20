/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:35:28 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/01 11:38:42 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	k;

	if (*needle == '\0')
		return (char *)haystack;
	while (*haystack != '\0')
	{
		k = 0;
		while (needle[k] == haystack[k] && needle[k] != '\0')
			k++;
		if (needle[k] == '\0')
			return (char *)haystack;
		haystack++;
	}
	return (0);
}
