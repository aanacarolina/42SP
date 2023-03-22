#include "fdf.h"

int main(int argc, char **argv)
{
    t_map *map;
    t_fdf *fdf;

    if (argc != 2)
        error("Usage: ./fdf <filename>");

    map = read_map(argv[1]);
    fdf = init_fdf(map);
    draw(fdf);
    mlx_hook(fdf->win, 17, 0, close_window, fdf);
    mlx_key_hook(fdf->win, key_press, fdf);
    mlx_loop(fdf->mlx);
    return (0);
}
