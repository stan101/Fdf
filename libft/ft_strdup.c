/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 15:51:30 by knamethe          #+#    #+#             */
/*   Updated: 2018/07/02 15:51:37 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		c;
	int		i;
	char	*s2;

	c = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char*)malloc(sizeof(*s2) * (i + 1));
	if (s2 == NULL)
		return (NULL);
	while (c < i)
	{
		s2[c] = s1[c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}
