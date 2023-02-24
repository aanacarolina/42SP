#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <X11/keysym.h>
#include <X11/X.h>

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
