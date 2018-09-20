/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:25:18 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/12 13:26:30 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*ts;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n')))
		i++;
	j = ft_strlen(s);
	while (j > i && ((s[j - 1] == ' ') || (s[j - 1] == '\t')
				|| (s[j - 1] == '\n')))
		j--;
	ts = ft_strsub(s, i, j - i);
	if (ts)
		return (ts);
	return (NULL);
}
