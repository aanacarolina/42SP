#include <mlx.h>
#include <stdio.h>
#include <unistd.h>

/*
int main (void)
{
	void *	mlx_ptr;
	void *	win_ptr;
	int 	i;
	int 	x;
	int 	y;
    int 	x2;
	int 	y2;
    int 	x3;
	int 	y3;
    int 	x4;
	int 	y4;
	mlx_ptr = mlx_init(); //initialize the connection between your software and the display. 
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "mlx 42"); //manage windows - params - connection. size x, size y, title
	i = 0;

    x = 250; //
    y = 125; //
    x2 = 250; //
    y2 = 300; //
    x3 = 250; //
    y3 = 213; //
    x4 = 250; //
    y4 = 169; //    
    
    


	mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);

	mlx_pixel_put(mlx_ptr, win_ptr, x, y2, 0xFF00);

	mlx_pixel_put(mlx_ptr, win_ptr, x, y3, 0xFF00);
	mlx_pixel_put(mlx_ptr, win_ptr, x, y4, 0xFF00);
	

	mlx_loop(mlx_ptr); //fica ouvindo eventos - esperando algo acontecer
	
	//printf("%d\n", i);
}

*/
/*
int main (void)
{
	void *	mlx_ptr;
	void *	win_ptr;
	int 	i;
	int 	x;
	int 	y;

	mlx_ptr = mlx_init(); //initialize the connection between your software and the display. 
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "mlx 42"); //manage windows - params - connection. size x, size y, title
	i = 0;

    x = 250; //
    y = 125; //
	mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 150; //    
	mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 175; //
    mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 200; //
    mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 225; //
	mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 250; //    
	mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 275; //
    mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
    x = 250; //
    y = 300; //
    mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00);
//y = (y[i] + y[i) / 2 ;

//x constante e y incrementa de N em N, N



	mlx_loop(mlx_ptr); //fica ouvindo eventos - esperando algo acontecer
	
	//printf("%d\n", i);
}

*/

int main (void)
{
	void *	mlx_ptr;
	void *	win_ptr;
	int 	i;
	int 	x;
	int 	y;
	int 	delta_x;
	int 	delta_y;
	int		decision;
	int		pink;
	int		white;
	int		red;

	mlx_ptr = mlx_init(); //initialize the connection between your software and the display. 
	win_ptr = mlx_new_window(mlx_ptr, 800, 800, "mlx 42"); //manage windows - params - connection. size x, size y, title
	i = 0;
    x = 250; //
    y = 125; //

	int decisor_bigger_than_zero {
	decision = (2 * delta_y) - delta_x;
		if (decision > 0)
		{
			decision + 1 = decision + *(2 * delta_y) - (2 * delta_x)
			x = x1 + 1
			y = y1 +1
		}
		return ();
	}

    while (y < 300)
    {
        mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF00FF);
		printf("[%i, %i]", x, y);
        y++;
    }

	while (x < 500)
     {
        mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF0000);
		printf("[x:%i, y:%i]", x, y);
        x++;
    }

	while (x > 0 && y > 0)
     {
		delta_x = x - (x - 1);
		delta_y = y - (y - 1);
        mlx_pixel_put(mlx_ptr, win_ptr, delta_x, delta_y, 0x0000FF);
		printf("[x:%i, y:%i]", x, y);
        x--;
		y--;
    }

/*Passo 1 - pontos de inicio e fim da linha
var start (x0, y0)
var end (xN, yN)

Passo 1.1
Δ x = Xn - X0
Δ y = Yn - Y0
*/

	mlx_loop(mlx_ptr); //fica ouvindo eventos - esperando algo acontecer

}