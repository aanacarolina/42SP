#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <X11/keysym.h>
#include <X11/X.h>
#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>

# define ESC_KEY ESC

typedef struct s_data
{
	void *mlx_ptr;
	void *win_ptr;
	int win_width;
	int win_height;
} t_data;

typedef struct s_position
{
	int x;
	int y;
	int color;
} t_position;


void	bresenham_line(int x0, int y0, int x_n, int y_n, int color, t_data *minilib);
void	init_and_new_win(t_data *minilib);
int		ft_close_esc(int keysym, t_data *minilib);
int		ft_close_x(t_data *minilib);

