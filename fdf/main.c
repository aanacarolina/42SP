/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:54:21 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/22 22:04:52 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{

	init_and_new_win(&minilib);
	mlx_hook(minilib.win_ptr, KeyPress, KeyPressMask, ft_close_esc, &minilib);
	mlx_hook(minilib.win_ptr, DestroyNotify, NoEventMask, ft_close_x, &minilib);
	bresenham_line(x02, y02, x_n2, y_n2, yellow, &minilib);
	mlx_loop(minilib.mlx_ptr);
	return (0);
}
