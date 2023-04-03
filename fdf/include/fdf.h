/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:23:48 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 21:39:15 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WIDTH 1200
# define HEIGHT 600

# include <stddef.h>

typedef struct s_point //guarda infos dos pontos
{
	double	x;
	double	y;
	double	z;
	int		color;
}	t_point;

typedef struct s_map //guarda infos dos mapas
{
	int		col_size;
	int		row_size;
	t_point	*points;
	size_t	points_size;
	double	scale;
}	t_map;

typedef struct s_minilibx //minilibx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		w_width;
	int		w_height;
	void	*img;
	char	*address;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_minilibx;

typedef struct s_fdf // estrutura mãe <3
{
	t_map		map;
	t_minilibx	mlx;
}	t_fdf;

#endif
