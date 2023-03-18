#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
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

int ft_close_esc(int keysym, t_data *minilib)
{

	if (keysym == XK_Escape)
	{
		mlx_destroy_window(minilib->mlx_ptr, minilib->win_ptr);
		exit(0);
	}
	return (0);
}

int ft_close_x(t_data *minilib)
{

	mlx_destroy_window(minilib->mlx_ptr, minilib->win_ptr);
	exit(0);
	return (0);
}



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
