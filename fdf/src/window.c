/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:25:34 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 23:26:54 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../include/draw_utils.h"
#include "../include/utils.h"
#include "../libs/minilibx/mlx.h"

int	ft_close_esc(int keysym, t_fdf *fdf)
{
	if (keysym == 65307)
		exit_special(fdf, NULL);
	return (0);
}

int	ft_close_x(t_fdf *fdf)
{
	exit_special(fdf, NULL);
	return (0);
}

int	ft_expose(t_fdf *fdf)
{
	draw_map(fdf, 0);
	return (0);
}

void	init_and_new_win(t_fdf *fdf)
{
	fdf->mlx.mlx_ptr = mlx_init();
	if (fdf->mlx.mlx_ptr == NULL)
		exit_special(fdf, "Mlx_init failed");
	fdf->mlx.win_ptr = mlx_new_window(fdf->mlx.mlx_ptr, \
									fdf->mlx.w_width, fdf->mlx.w_height, "fdf");
	if (fdf->mlx.win_ptr == NULL)
		exit_special(fdf, "Window failed to open");
	fdf->mlx.img = mlx_new_image(fdf->mlx.mlx_ptr, \
								fdf->mlx.w_width, fdf->mlx.w_height);
	if (fdf->mlx.img == NULL)
		exit_special(fdf, "Can't get image");
	fdf->mlx.address = mlx_get_data_addr(fdf->mlx.img, &fdf->mlx.bits_per_pixel,
			&fdf->mlx.line_length, &fdf->mlx.endian);
	mlx_hook(fdf->mlx.win_ptr, 2, (1L << 0), ft_close_esc, fdf);
	mlx_hook(fdf->mlx.win_ptr, 17, (0), ft_close_x, fdf);
	mlx_hook(fdf->mlx.win_ptr, 12, (1L << 15), ft_expose, fdf);
}	
