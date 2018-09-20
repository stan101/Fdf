/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:32:03 by knamethe          #+#    #+#             */
/*   Updated: 2018/08/12 16:31:53 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_init_structmlx(t_mlx *e)
{
	e->xwin = 2500;
	e->ywin = 1250;
	e->zoom = 20;
	e->movex = 0;
	e->movey = 0;
	e->alti = 0;
}

int				main(int argc, char **argv)
{
	t_mlx	e;

	if (argc == 2)
	{
		e.map = ft_map(argv, &e);
		ft_init_structmlx(&e);
		ft_map_xy(&e, 0, 0, 0);
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, e.xwin, e.ywin, "FDF");
		ft_pixel(&e);
		mlx_hook(e.win, 2, 0, ft_key_hook, &e);
		mlx_loop(e.mlx);
	}
	return (0);
}
