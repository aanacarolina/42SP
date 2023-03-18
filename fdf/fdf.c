/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:34 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/08 19:53:34 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void bresenham_line(t_position *coord, t_data *mlx)
{

	int	delta_x;
	int	delta_y;
	int	sx;
	int	sy;
	int	decision;
	int	dec_2;

	delta_x = abs(coord->x_end - coord->x_start); // posição atual MENOS posição anterior - distancias
	delta_y = abs(coord->y_end - coord->y_start); // posição atual MENOS posição anterior - distancias
	sx = coord->x_start < coord->x_end ? 1 : -1;
	sy = coord->y_start < coord->y_end ? 1 : -1;
	decision = delta_x - delta_y;

	while (coord->x_start != coord->x_end || coord->y_start != coord->y_end)
	{
		ft_pixel_put(mlx->mlx_ptr, mlx->win_ptr, coord->x_start, coord->color);
		dec_2 = 2 * decision;
		if (dec_2 > -delta_y)
		{
			decision = decision - delta_y;
			x0 = x0 + sx;
		}
		if (dec_2 < delta_x)
		{
			decision = decision + delta_x;
			y0 = y0 + sy;
		}
	}

	ft_pixel_put(mlx->mlx_ptr, mlx->win_ptr, coord->x_start, coord->color);
}

void init_and_new_win(t_data *mlx)
{

	mlx->win_width = 960;
	mlx->win_height = 640;
	mlx->mlx_ptr = mlx_init();
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, \
									mlx->w_width, mlx->w_height, "fdf");
}
