/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:24:09 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/31 21:40:08 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/gnl/get_next_line.h"
#include "../libs/libft/libft.h"
#include "../include/create_map.h"
#include "../include/utils.h"
#include "../include/fdf.h"
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>

static int	file_opener(t_fdf *fdf, char *file_name)
{
	int	fdf_file;

	fdf_file = open(file_name, O_RDONLY);
	if (fdf_file < 0)
	{
		perror("Failed to open file- create_map");
		exit_special(fdf, NULL);
	}
	return (fdf_file);
}

static t_point	*get_point(t_map *map, int row_size, int count_r, int count_c)
{
	t_point	*point_tmp;

	point_tmp = map->points + ((row_size * count_r) + count_c);
	return (point_tmp);
}


static	void	get_z_and_color(char *column, t_point * tmp)
{
	char **z_and_color;

	z_and_color = ft_split(column, ',');
	tmp->z = ft_atoi(z_and_color[0]); 
	if (z_and_color[1] != NULL)
		tmp->color = atoi_hexa(z_and_color[1]);
	else
		tmp->color = 50;
	free_split(z_and_color);
}

static	void	create_columns(t_fdf *fdf, int count_r, char **z_values)
{
	int		count_c;
	int		x;
	t_point	*tmp;

	x = ((fdf->map.col_size / 2) * -1);
	count_c = 0;
	while (count_c < fdf->map.col_size)
	{
		tmp = get_point(&fdf->map, fdf->map.row_size, count_r, count_c);
		tmp->x = x;
		tmp->y = (count_r + ((fdf->map.row_size / 2) * -1));
		get_z_and_color(z_values[count_c], tmp);
		x++;
		count_c++;
	}
}

void	create_map(t_fdf *fdf, char *file_name)
{
	int		count_r;
	char	*line;
	char	**z_values;
	int		fd;

	fd = file_opener(fdf, file_name);

	fdf->map.points = malloc(sizeof(t_point) * fdf->map.points_size);
	if (fdf->map.points == NULL)
		exit_special(fdf, "malloc error - create_map");
	count_r = 0;
	while (count_r < fdf->map.row_size)
	{
		line = get_next_line(fd);
		z_values = ft_split(line, ' ');
		create_columns(fdf, count_r, z_values);
		free(line);
		free_split(z_values);
		count_r++;
	}

}
