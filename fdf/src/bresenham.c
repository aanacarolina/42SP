/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:54:20 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 21:37:54 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../include/bresenham.h"
#include "../include/fdf.h"
#include "../include/draw_utils.h"

int	ft_sign(int x)
{
	if (x < 0)
		return (-1);
	else
		return (1);
}

void	start_bres(t_bres *bres, t_point start, t_point end)
{
	int	tmp;

	bres->deltax = fabs(end.x - start.x);
	bres->deltay = fabs(end.y - start.y);
	bres->signalx = ft_sign(end.x - start.x);
	bres->signaly = ft_sign(end.y - start.y);
	bres->interchange = FALSE;
	if (bres->deltay > bres->deltax)
	{
		tmp = bres->deltax;
		bres->deltax = bres->deltay;
		bres->deltay = tmp;
		bres->interchange = TRUE;
	}
	bres->error = 2 * bres->deltay - bres->deltax;
}

void	create_line(t_fdf *fdf, t_bres *bres, t_point start, t_point end)
{
	int	x = start.x;
	int	y = start.y;
	int	i;

	i = 0;
	while (i < bres->deltax)
	{
		draw_pixel(fdf, x, y, start.color);
		while (bres->error >= 0)
		{
			if (bres->interchange)
				x = x + bres->signalx;
			else
				y = y + bres->signaly;
			bres->error = bres->error - 2 * bres->deltax;
		}
		if (bres->interchange)
			y = y + bres->signaly;
		else
			x = x + bres->signalx;
		bres->error = bres->error + 2 * bres->deltay;
		i++;
	}
}

void	bresenham(t_fdf *fdf, t_point start, t_point end)
{
	t_bres	bres;

	start_bres(&bres, start, end);
	if (bres.deltax == 0 && bres.deltay == 0)
		draw_pixel(fdf, start.x, start.y, start.color);
	else
		create_line(fdf, &bres, start, end);
}
