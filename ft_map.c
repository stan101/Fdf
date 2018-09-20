/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:33:23 by knamethe          #+#    #+#             */
/*   Updated: 2018/08/12 16:34:54 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_check_line(char *line)
{
	int		j;

	j = 0;
	if (ft_strlen(line) <= 0)
		exit(EXIT_FAILURE);
	while (line[j] != '\0')
	{
		if (ft_isdigit(line[j]))
			while (line[j] != ' ' && line[j] != '\0')
				j++;
		if (line[j] == '\0')
			return ;
		if (!(ft_isdigit(line[j]) ||
					(line[j] == '-' && ft_isdigit(line[j + 1])) ||
					line[j] == ' '))
			exit(EXIT_FAILURE);
		j++;
	}
}

char			*the_while(int fd, char *mapjoin, t_mlx *e)
{
	char *ptr;
	char *line;

	while (get_next_line(fd, &line) > 0)
	{
		ft_check_line(line);
		ptr = mapjoin;
		mapjoin = ft_strjoin(mapjoin, line);
		free(ptr);
		ptr = mapjoin;
		mapjoin = ft_strjoin(mapjoin, "\n");
		e->nbline++;
		free(line);
		free(ptr);
	}
	free(line);
	return (mapjoin);
}

char			**ft_map(char **argv, t_mlx *e)
{
	int		fd;
	char	*line;
	char	*mapjoin;
	char	**map;

	fd = open(argv[1], O_RDONLY);
	mapjoin = (char*)malloc(1);
	e->nbline = 0;
	mapjoin = the_while(fd, mapjoin, e);
	if (e->nbline == 0)
		exit(EXIT_FAILURE);
	if (get_next_line(fd, &line) == -1)
		exit(EXIT_FAILURE);
	map = ft_strsplit(mapjoin, '\n');
	free(line);
	free(mapjoin);
	return (map);
}
