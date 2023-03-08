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

void bresenham_line(int x0, int y0, int x_n, int y_n, int color, t_data *minilib)
{

	int delta_x;
	int delta_y;
	int sx;
	int sy;
	int decision;
	int dec_2;

	delta_x = abs(x_n - x0);// posição atual MENOS posição anterior - distancias
	delta_y = abs(y_n - y0);// posição atual MENOS posição anterior - distancias
	sx = x0 < x_n ? 1 : -1;
    sy = y0 < y_n ? 1 : -1;
    decision = delta_x - delta_y;// ponto de decisao qual a melhor próxima linha a seguir

	
	while (x0 != x_n || y0 != y_n)
    {
        mlx_pixel_put(minilib->mlx_ptr, minilib->win_ptr, x0, y0, color);
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

    mlx_pixel_put(minilib->mlx_ptr, minilib->win_ptr, x_n, y_n, color);
}

void init_and_new_win(t_data *minilib)
{

	minilib->win_width = 960;
	minilib->win_height = 640;
	minilib->mlx_ptr = mlx_init(); // incializa a conexão entre o software e o monitor
	minilib->win_ptr = mlx_new_window(minilib->mlx_ptr, minilib->win_width, minilib->win_height, "fdf_42"); // gerenciador de janela
}
