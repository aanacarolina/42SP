
#include "fdf.h"

#define WIDTH 1280
#define HEIGHT 720

void init_fdf(t_fdf *fdf)
{
    fdf->mlx = mlx_init();
    fdf->win = mlx_new_window(fdf->mlx, WIDTH, HEIGHT, "FdF");
    fdf->img.ptr = mlx_new_image(fdf->mlx, WIDTH, HEIGHT);
    fdf->img.data = (int *)mlx_get_data_addr(fdf->img.ptr, &fdf->img.bpp, &fdf->img.size_line, &fdf->img.endian);
    fdf->camera.x = 0;
    fdf->camera.y = 0;
    fdf->camera.z = -10;
    fdf->camera.alpha = 0;
    fdf->camera.beta = 0;
    fdf->camera.gamma = 0;
    fdf->map.width = 0;
    fdf->map.height = 0;
    fdf->map.scale = 20;
    fdf->map.points = NULL;
}

void read_map(char *filename, t_map *map)
{
    int fd;
    char *line;
    int y;

    fd = open(filename, O_RDONLY);
    y = 0;
    while (get_next_line(fd, &line))
    {
        if (!parse_line(line, &map->points[y], &map->width))
            exit_error("Found invalid map line.");
        free(line);
        y++;
    }
    map->height = y;
    free(line);
    close(fd);
}

int parse_line(char *line, t_point *points, int *width)
{
    char **split;
    int i;

    split = ft_strsplit(line, ' ');
    *width = 0;
    while (split[*width])
    {
        points[*width].x = *width;
        points[*width].y = 0;
        points[*width].z = ft_atoi(split[*width]);
        (*width)++;
    }
    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
    if (*width == 0)
        return (0);
    return (1);
}

void set_iso(t_fdf *fdf, t_point *point)
{
    int previous_x;
    int previous_y;

    previous_x = point->x;
    previous_y = point->y;
    point->x = (previous_x - previous_y) * cos(0.523599);
    point->y = -point->z + (previous_x + previous_y) * sin(0.523599);
}

void draw_line(t_fdf *fdf, t_point p1, t_point p2, int color)
{
    int dx;
    int dy;
    int sx;
    int sy;
    int err;
    int e2;

    dx = abs(p2.x - p1.x);
    dy = abs(p2.y - p1.y);
    sx = p1.x < p2.x ? 1 : -1;
    sy = p1.y < p2.y ? 1 : -1;
    err = dx - dy;
    while (p1.x != p2.x || p1.y != p2.y)
    {
        if (p1.x >= 0 && p1.x < WIDTH && p1.y >= 0 && p1.y < HEIGHT)
            fdf->img.data[p1.y * WIDTH + p1.x] = color;
        e2 = 2 * err;
        if (e2 > -dy)
        {
            err -= dy;
            p1.x += sx;
        }
        if (e2 < dx)
        {
            err += dx;
            p1.y += sy;
        }
    }
    if (p1.x >= 0 && p1.x < WIDTH && p1.y >= 0 && p1.y < HEIGHT)
        fdf->img.data[p1.y * WIDTH + p1.x] = color;
}

void draw_map(t_fdf *fdf)
{
    int x;
    int y;
    t_point cur;
    t_point next;

    y = 0;
    while (y < fdf->map.height)
    {
        x = 0;
        while (x < fdf->map.width)
        {
            cur = fdf->map.points[y * fdf->map.width + x];
            if (x < fdf->map.width - 1)
            {
                next = fdf->map.points[y * fdf->map.width + x + 1];
                draw_line(fdf, project(cur, fdf), project(next, fdf), 0xFFFFFF);
            }
            if (y < fdf->map.height - 1)
            {
                next = fdf->map.points[(y + 1) * fdf->map.width + x];
                draw_line(fdf, project(cur, fdf), project(next, fdf), 0xFFFFFF);
            }
            x++;
        }
        y++;
    }
}

void render(t_fdf *fdf)
{
    mlx_clear_window(fdf->mlx, fdf->win);
    clear_image(&fdf->img);
    draw_map(fdf);
    mlx_put_image_to_window(fdf->mlx, fdf->win, fdf->img.ptr, 0, 0);
    print_controls(fdf);
}

void move(int keycode, t_fdf *fdf)
{
    if (keycode == 123)
        fdf->camera.x -= 10;
    if (keycode == 124)
        fdf->camera.x += 10;
    if (keycode == 125)
        fdf->camera.y += 10;
    if (keycode == 126)
        fdf->camera.y -= 10;
    render(fdf);
}

void zoom(int keycode, t_fdf *fdf)
{
    if (keycode == 69)
        fdf->map.scale += 1;
    if (keycode == 78 && fdf->map.scale > 1)
        fdf->map.scale -= 1;
    render(fdf);
}

void rotate(int keycode, t_fdf *fdf)
{
    if (keycode == 91)
        fdf->camera.alpha += 0.05;
    if (keycode == 84)
        fdf->camera.alpha -= 0.05;
    if (keycode == 86)
        fdf->camera.beta += 0.05;
    if (keycode == 88)
        fdf->camera.beta -= 0.05;
    if (keycode == 89)
        fdf->camera.gamma += 0.05;
    if (keycode == 92)
        fdf->camera.gamma -= 0.05;
    render(fdf);
}

int key_press(int keycode, t_fdf *fdf)
{
    if (keycode == 53)
        exit(0);
    move(keycode, fdf);
    zoom(keycode, fdf);
    rotate(keycode, fdf);
    return (0);
}

int close_window(void *param)
{
    (void)param;
    exit(0);
}

void print_controls(t_fdf *fdf)
{
    mlx_string_put(fdf->mlx, fdf->win, 10, 10, 0xFFFFFF, "Move: Arrows");
    mlx_string_put(fdf->mlx, fdf->win, 10, 30, 0xFFFFFF, "Zoom In: +");
    mlx_string_put(fdf->mlx, fdf->win, 10, 50, 0xFFFFFF, "Zoom Out: -");
    mlx_string_put(fdf->mlx, fdf->win, 10, 70, 0xFFFFFF, "Rotate X: 1/2");
    mlx_string_put(fdf->mlx, fdf->win, 10, 90, 0xFFFFFF, "Rotate Y: 3/4");
    mlx_string_put(fdf->mlx, fdf->win, 10, 110, 0xFFFFFF, "Rotate Z: 5/6");
    mlx_string_put(fdf->mlx, fdf->win, 10, 130, 0xFFFFFF, "Exit: Esc");
}

int main(int argc, char **argv)
{
    t_fdf fdf;

    if (argc != 2)
        print_usage_error();
    read_file(argv[1], &fdf.map);
    fdf.mlx = mlx_init();
    fdf.win = mlx_new_window(fdf.mlx, WIDTH, HEIGHT, "FdF");
    fdf.img.ptr = mlx_new_image(fdf.mlx, WIDTH, HEIGHT);
    fdf.img.data = (int *)mlx_get_data_addr(fdf.img.ptr, &fdf.img.bpp,
                                            &fdf.img.size_l, &fdf.img.endian);
    fdf.map.scale = ft_min(WIDTH / fdf.map.width / 2, HEIGHT / fdf.map.height / 2);
    fdf.camera = new_camera();
    render(&fdf);
    mlx_hook(fdf.win, 2, 0, key_press, &fdf);
    mlx_hook(fdf.win, 17, 0, close_window, &fdf);
    mlx_loop(fdf.mlx);
    return (0);
}
