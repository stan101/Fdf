/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:34:01 by knamethe          #+#    #+#             */
/*   Updated: 2018/08/12 14:51:51 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_width(char **map, int i)
{
	int		j;
	int		compt;

	j = 0;
	compt = 0;
	while (map[i][j] != '\0')
	{
		if (ft_isdigit(map[i][j]) == 1 && ft_isdigit(map[i][j + 1]) != 1)
		{
			compt++;
			while (map[i][j] != ' ' && map[i][j] != '\0')
				j++;
		}
		else
			j++;
	}
	return (compt);
}
