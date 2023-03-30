/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:25:34 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/30 19:56:14 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"


void	init_and_new_win(t_fdf *fdf)
{

	fdf->mlx.w_width = 960;
	fdf->mlx.w_height = 640;
	fdf->mlx.mlx_ptr = mlx_init();
	fdf->mlx.win_ptr = mlx_new_window(fdf->mlx.mlx_ptr, \
									fdf->mlx.w_width, fdf->mlx.w_height, "fdf");
}
int	ft_close_esc(int keysym, t_fdf *fdf)
{
	if (keysym == 0)
	{
		mlx_destroy_window(fdf->mlx.mlx_ptr, fdf->mlx.win_ptr);
		exit(0);
	}
	return (0);
}

int	ft_close_x(t_fdf *fdf)
{
	mlx_destroy_window(fdf->mlx.mlx_ptr, fdf->mlx.win_ptr);
	exit(0);
	return (0);
}