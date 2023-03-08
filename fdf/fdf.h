#ifndef FDF_H
# define FDF_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <X11/keysym.h>
#include <X11/X.h>
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
char	*extra_letters(char *save);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*join_strings(int fd, char *save);
char	*read_line(char *save);
size_t	ft_strlen(char *str);

#endif
