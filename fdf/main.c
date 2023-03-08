/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:54:21 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/08 19:54:22 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(void)
{

	t_data minilib;

	int red = 0xFF0000;

	t_position p_0;
	t_position p_1;
	t_position p_2;

	p_0.x = 100;
	p_0.y = 100;
	p_0.color = red;

	p_1.x = 200;
	p_1.y = 100;
	p_1.color = red;

	p_2.x = 100;
	p_2.y = 200;
	p_2.color = red;

	int pink = 0xFF00FF;
	int yellow = 0xFFFF00;

	
	int x0 = 100;
	int y0 = 100;
	int x_n = 400;
	int y_n = 400;

	int x01 = 400;
	int y01 = 100;
	int x_n1 = 100;
	int y_n1 = 100;

	int x02 = 100;
	int y02 = 400;
	int x_n2 = 400;
	int y_n2 = 400;

	init_and_new_win(&minilib);
	mlx_hook(minilib.win_ptr, KeyPress, KeyPressMask, ft_close_esc, &minilib);
	mlx_hook(minilib.win_ptr, DestroyNotify, NoEventMask, ft_close_x, &minilib);
	bresenham_line(x0, y0, x_n, y_n, pink, &minilib);
	bresenham_line(x01, y01, x_n1, y_n1, red, &minilib);
	bresenham_line(x02, y02, x_n2, y_n2, yellow, &minilib);
	mlx_loop(minilib.mlx_ptr); // fica ouvindo eventos - esperando algo aontecer

	return (0);
}