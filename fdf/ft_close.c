#include "fdf.h"


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