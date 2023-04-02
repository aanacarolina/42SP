/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:10:33 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 00:36:07 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

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

void	draw_pixel(t_fdf *fdf, double x, double y, int color)
{
	int pixel_position;
	char *address_image;
	
	if (x < 0 || y < 0 || x > WIDTH || y > HEIGHT)
		return;
	pixel_position = (y * WIDTH * 4) + (x * 4);
	if (fdf->mlx.bits_per_pixel != 32)
		color = mlx_get_color_value(fdf->mlx.mlx_ptr, color);
	put_pixel(&address_image[pixel_position], color, fdf->mlx.endian);
}

void	draw_col(t_fdf *fdf)
{
	int count;
	
	count = 0;
	while(count < (fdf->map.points_size - fdf->map.row_size))
	{
		bresenham(fdf, fdf->map.points[count], fdf->map.points[count+fdf->map.row_size]);
		count++;
	}
}

void	draw_row(t_fdf *fdf)
{
	int count;
	
	count = 0;	while(count < (fdf->map.points_size - 2)) 
	{
		if (count % fdf->map.row_size != (fdf->map.row_size-1))
		bresenham(fdf, fdf->map.points[count], fdf->map.points[count+1]);
		count++;
	}
}
