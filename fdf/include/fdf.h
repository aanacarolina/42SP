/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:23:48 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/29 21:33:53 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H


typedef struct s_point //guarda infos dos pontos
{
	double	x;
	double	y;
	double	z;
	int		color;
} t_point;

typedef struct s_map //guarda infos dos mapas
{
	int		col_size;
	int		row_size;
	t_map	*points;
	size_t	points_size;
} t_map;

typedef	struct s_fdf // estrutura mãe <3
{
		
	t_map	map;
} t_fdf;

#endif


