/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:32:19 by knamethe          #+#    #+#             */
/*   Updated: 2018/08/12 14:53:29 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
	int		xwin;
	int		ywin;
	int		nbline;
	int		zoom;
	int		movex;
	int		movey;
	int		color;
	int		varx;
	int		vary;
	int		alti;
	int		**mapxyz;
	char	**map;
}				t_mlx;

typedef struct	s_draw
{
	int		startx;
	int		starty;
	int		endxx;
	int		endxy;
	int		endyx;
	int		endyy;
}				t_draw;

void			ft_map_xy(t_mlx *e, int y, int x, int i);
void			ft_pixel(t_mlx *e);
void			ft_draw(int endx, int endy, t_mlx *e, t_draw *d);
int				get_next_line(int const fd, char **line);
int				ft_width(char **map, int i);
int				ft_key_hook(int keycode, t_mlx *e);
char			**ft_map(char **argv, t_mlx *e);
#endif
