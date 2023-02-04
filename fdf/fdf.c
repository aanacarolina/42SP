#include <mlx.h>
#include <stdio.h>
#include <unistd.h>

void bresenham_line (int x0, int y0, int x_n, int y_n)
{
	void *	mlx_ptr;
	void *	win_ptr;
	int		win_width;
	int 	win_height;
	int *	line_start;
	int * 	line_end;
	int 	x;
	int		y; 
	int 	delta_x;
	int 	delta_y;
	int		decision;
	int		pink;
	int		yellow;
	int		red;

	win_width = 960;
	win_height = 640;
	mlx_ptr = mlx_init(); //incializa a conexão entre o software e o monitor 
	win_ptr = mlx_new_window(mlx_ptr, win_width, win_height, "fdf_42"); //gerenciado de janela 
	delta_x = x_n - x0;  //posição atual MENOS posição anterior
	delta_y = y_n - y0; //posição atual MENOS posição anterior
	decision = (2 * delta_y) - delta_x; //ponto de decisao qual a melhor próxima linha a seguir 
	x = x0; // para nao perder valores iniciais, pois estaremos usando x0 como contador
	y = y0; // para nao perder valores iniciais, pois estaremos usando y0 como contador
	pink = 0xFF00FF;
	yellow = 0xFFFF00;
	red = 0xFF0000;

	while (x < x_n)
	{
		if (decision >= 0){
		mlx_pixel_put(mlx_ptr, win_ptr, x, y, yellow);
		y = y + 1;
		decision = decision + 2 * delta_y - 2 * delta_x;
		}
		else {
		mlx_pixel_put(mlx_ptr, win_ptr, x, y, pink);
		decision = decision + 2 * delta_y;
		}
		x = x +1;
	}

	mlx_loop(mlx_ptr); //fica ouvindo eventos - esperando algo aontecer

}


int main(void)
{

int x0 = 125;
int y0 = 125;
int x_n = 250;
int y_n = 250;

bresenham_line(x0, y0, x_n, y_n);
printf("[%i %i", x0, y0);
 
return(0);
}
