/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:23:48 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/30 20:41:46 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WIDTH 1280
# define HEIGHT 720

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
}	t_map;

typedef struct s_minilibx //minilibx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		w_width;
	int		w_height;
	void	*img;
	char	*address;
}	t_minilibx;

typedef struct s_fdf // estrutura mãe <3
{
	t_map	map;
	t_minilibx mlx;
}	t_fdf;

#endif


