#include "fdf.h"

int	ft_close_esc(int keycode, t_mlx *m)
{
	(void)keycode;
	mlx_destroy_window(m->mlx, m->win);
	m->win = NULL;
	return (0);
}

int	ft_close_x(t_mlx *m)
{
	mlx_destroy_window(m->mlx, m->win);
	m->win = NULL;
	return (0);
}