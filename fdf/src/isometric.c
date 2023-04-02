/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:47:31 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/01 20:05:11 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../include/fdf.h"

/*
         [1     0      0]
   X     [0  cos0  -sin0]
         [0  sin0   cos0]
*/
void	x_rotation(t_point *point, int size, double ang)
{
	double	tmp_y;
	double	pcos;
	double	psin;
	double	nsin;
	double	rad;

	rad = ang * M_PI / 180;
	pcos = cos(rad);
	psin = sin(rad);
	nsin = -sin(rad);
	while (size--)
	{
		tmp_y = point[size].y;
		point[size].y = pcos * tmp_y + nsin * point[size].z;
		point[size].z = psin * tmp_y + pcos * point[size].z;
	}
}

/*
         [cos0  0   sin0]
   Y     [0     1      0]
         [-sin0 0   cos0]
*/
void	y_rotation(t_point *point, int size, double ang)
{
	double	tmp_x;
	double	pcos;
	double	psin;
	double	nsin;
	double	rad;

	rad = ang * M_PI / 180;
	pcos = cos(rad);
	psin = sin(rad);
	nsin = -sin(rad);
	while (size--)
	{
		tmp_x = point[size].x;
		point[size].x = pcos * tmp_x + psin * point[size].z;
		point[size].x = nsin * tmp_x + pcos * point[size].z;
	}
}

/*
         [cos0  -sin0  0]
   Z     [sin0   cos0  0]
         [0     0      1]
*/
void	z_rotation(t_point *point, int size, double ang)
{
	double	tmp_x;
	double	pcos;
	double	psin;
	double	nsin;
	double	rad;

	rad = ang * M_PI / 180;
	pcos = cos(rad);
	psin = sin(rad);
	nsin = -sin(rad);
	while (size--)
	{
		tmp_x = point[size].x;
		point[size].x = pcos * tmp_x + nsin * point[size].x;
		point[size].x = psin * tmp_x + pcos * point[size].y;
	}
}

/*
         [Sx  0   0   0]
         [0   Sy  0   0]
         [0   0   Sz  0]
         [0   0   0   1]
*/

void	scale(t_point *point, int size, int scale)
{
	while (size--)
	{
		point[size].x *= scale;
		point[size].y *= scale;
		point[size].z *= scale;
	}
}

/*
         [1   0   0  Tx]
         [0   1   0  Ty]
         [0   0   1  Tz]
         [0   0   0   1]
*/

void	translation(t_point *point, int size, const t_point *new_coor)
{
	while (size--)
	{
		point[size].x = new_coor->x + point[size].x;
		point[size].y = new_coor->y + point[size].y;
	}
}
