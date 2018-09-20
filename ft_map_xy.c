/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_xy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:33:43 by knamethe          #+#    #+#             */
/*   Updated: 2018/08/12 14:57:42 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_getmap_xy_struct(t_mlx *e)
{
	int		y;

	y = 0;
	if (!(e->mapxyz = (int **)malloc((e->nbline + 1) * sizeof(int *))))
		exit(EXIT_FAILURE);
	while (y < e->nbline)
	{
		e->mapxyz[y] = (int *)malloc(ft_width(e->map, y) * sizeof(int));
		if (!(e->mapxyz[y]))
			exit(EXIT_FAILURE);
		y++;
	}
}

void			ft_map_xy(t_mlx *e, int y, int x, int i)
{
	ft_getmap_xy_struct(e);
	while (y < e->nbline)
	{
		i = 0;
		x = 0;
		while (e->map[y][i] != '\0')
		{
			if (ft_isdigit(e->map[y][i]) == 1 || e->map[y][i] == '-')
			{
				e->mapxyz[y][x] = ft_atoi(&e->map[y][i]);
				e->mapxyz[y][x] += (e->mapxyz[y][x] != 0) ? e->alti : 0;
				x++;
				if (e->map[y][i] == '-')
					i++;
				while (ft_isdigit(e->map[y][i]) == 1)
					i++;
				while (e->map[y][i] != ' ' && e->map[y][i] != '\0')
					i++;
			}
			else
				i++;
		}
		y++;
	}
}
