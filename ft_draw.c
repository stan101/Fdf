/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:32:56 by knamethe          #+#    #+#             */
/*   Updated: 2018/08/12 14:33:00 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_draw_dx(int absx, int absy, t_mlx *e, t_draw *d)
{
	int		cumul;
	int		i;
	int		x;
	int		y;

	x = d->startx;
	y = d->starty;
	cumul = absx / 2;
	i = 1;
	while (i <= absx)
	{
		x = x + e->varx;
		cumul = cumul + absy;
		if (cumul >= absx)
		{
			cumul = cumul - absx;
			y = y + e->vary;
		}
		mlx_pixel_put(e->mlx, e->win, 400 + x, 200 + y, e->color);
		i++;
	}
}

static void		ft_draw_dy(int absx, int absy, t_mlx *e, t_draw *d)
{
	int		cumul;
	int		i;
	int		x;
	int		y;

	x = d->startx;
	y = d->starty;
	cumul = absy / 2;
	i = 1;
	while (i <= absy)
	{
		y = y + e->vary;
		cumul = cumul + absx;
		if (cumul >= absy)
		{
			cumul = cumul - absy;
			x = x + e->varx;
		}
		mlx_pixel_put(e->mlx, e->win, 400 + x, 200 + y, e->color);
		i++;
	}
}

void			ft_draw(int endx, int endy, t_mlx *e, t_draw *d)
{
	int		absx;
	int		absy;

	absx = (endx - d->startx < 0) ? -(endx - d->startx) : endx - d->startx;
	absy = (endy - d->starty < 0) ? -(endy - d->starty) : endy - d->starty;
	e->varx = ((endx - d->startx) > 0) ? 1 : -1;
	e->vary = ((endy - d->starty) > 0) ? 1 : -1;
	d->startx = d->startx + e->movex;
	d->starty = d->starty + e->movey;
	mlx_pixel_put(e->mlx, e->win, 400 + d->startx, 200 + d->starty, e->color);
	if (absx > absy)
		ft_draw_dx(absx, absy, e, d);
	else
		ft_draw_dy(absx, absy, e, d);
	d->startx = d->startx - e->movex;
	d->starty = d->starty - e->movey;
}
