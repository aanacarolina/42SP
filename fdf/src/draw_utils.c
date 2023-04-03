/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:10:33 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 23:21:46 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../include/isometric.h"
#include "../include/bresenham.h"
#include "../include/utils.h"
#include "../libs/minilibx/mlx.h"

static void	put_pixel(char *address, int color, int endian)
{
	if (endian == 1)
	{
		address[0] = (color >> 24) & 0xff;
		address[1] = (color >> 16) & 0xff;
		address[2] = (color >> 8) & 0xff;
		address[3] = (color) & 0xff;
	}
	else
	{
		address[3] = (color >> 24) & 0xff;
		address[2] = (color >> 16) & 0xff;
		address[1] = (color >> 8) & 0xff;
		address[0] = (color) & 0xff;
	}
}

void	draw_pixel(t_fdf *fdf, double x1, double y1, int color)
{
	int		pixel_position;
	char	*address_image;
	int		x;
	int		y;

	x = (int)x1;
	y = (int)y1;
	address_image = fdf->mlx.address;
	if (x < 0 || y < 0 || x > WIDTH || y > HEIGHT)
		return ;
	pixel_position = (y * WIDTH * 4) + (x * 4);
	if (fdf->mlx.bits_per_pixel != 32)
		color = mlx_get_color_value(fdf->mlx.mlx_ptr, color);
	put_pixel(&address_image[pixel_position], color, fdf->mlx.endian);
}

void	draw_col(t_fdf *fdf)
{
	int	count;

	count = 0;
	while (count < (fdf->map.points_size - fdf->map.col_size))
	{
		bresenham(fdf, fdf->map.points[count], fdf->map.points[count + fdf->map.col_size]);
		count++;
	}
}

void	draw_row(t_fdf *fdf)
{
	int	count;

	count = 0;
	while (count < (fdf->map.points_size - 1))
	{
		if (count % fdf->map.col_size != (fdf->map.col_size - 1))
			bresenham(fdf, fdf->map.points[count], fdf->map.points[count + 1]);
		count++;
	}
}

/*
void print_all_points(t_fdf *fdf)
{
	int i = 0;
	
	while (i < 9)
	{
		printf("X: [%f]\t Y:[%f]\n", fdf->map.points[i].x, fdf->map.points[i].y);
		i++;
	}
}*/

void	draw_map(t_fdf *fdf, int create)
{
	int	scale_fct;

	scale_fct = scale_factor(fdf);
	if (create)
	{
		x_rotation(fdf->map.points, fdf->map.points_size, 30);
		y_rotation(fdf->map.points, fdf->map.points_size, -30);
		z_rotation(fdf->map.points, fdf->map.points_size, 35);
		scale(fdf->map.points, fdf->map.points_size, scale_fct);
		translation(fdf->map.points, fdf->map.points_size, WIDTH / 2, HEIGHT / 2);
		draw_col(fdf);
		draw_row(fdf);

/*
	t_point *tmp;

	t_map *map = &fdf->map;

	for (int r = 0; r < map->row_size; r++)
	{
		for (int c = 0; c < map->col_size; c++)
		{
			tmp = map->points + ((map->row_size * r) + c);
				printf("(% .2lf, % .2lf, % .2lf)", tmp->x, tmp->y, tmp->z);
			if (c == (map->col_size - 1))
				printf("\n");
		}
	}
*/
	//t_point a0; a0.x = 500.0; a0.y=250.0; a0.z=0.0
	//t_point a1; a1.x = 550.0; a1.y=250.0; a1.z=0.0
	//t_point a0; a0.x = 500.0; a0.y=250.0; a0.z=0.0

	}
	mlx_put_image_to_window(fdf->mlx.mlx_ptr, fdf->mlx.win_ptr, fdf->mlx.img, 0, 0);
}

