/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:54:20 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 02:09:25 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../include/bresenham.h"
#include "../include/fdf.h"
#include "../include/draw_utils.h"

int ft_sign(int x)
{
	if (x < 0)
		return (-1);
	else
		return (1);
}

void start_bres(t_bres *bres, t_point start, t_point end)
{
	int tmp;

	bres->deltax = fabs((end.x - start.x)); // descarta sinal
	bres->deltay = fabs((end.y - start.y));
	bres->signalx = ft_sign((end.x - start.x)); // subtração do ponto INTERNO x final pelo x inicial - se > 0 signalx = 1 e se < signalx = -1
	bres->signaly = ft_sign((end.y - start.y));

	bres->interchange = FALSE; // flag para ver o maior valor e ai vai desenhar  a partir desse ponto, mantendo o maior constante

	if (bres->deltay > bres->deltax)
	{
		tmp = bres->deltax;
		bres->deltax = bres->deltay;
		bres->deltay = tmp;
		bres->interchange = TRUE; // troca aqui a flag
	}
	bres->error = 2 * bres->deltay - bres->deltax; // diferença para entender se está no meio e decidir se o pixel vai desenhado no pixel de cima ou de baixo
}

void create_line(t_fdf *fdf, t_bres *bres, t_point start, t_point end)
{
	int x = start.x;
	int y = start.y;
	int i;

	i = 0;
	printf("----------\n");
	while (i < bres->deltax) // começa a ligar o ponto
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

void bresenham(t_fdf *fdf, t_point start, t_point end)
{
	t_bres bres;

	start_bres(&bres, start, end);
	if (bres.deltax == 0 && bres.deltay == 0)
		{draw_pixel(fdf, start.x, start.y, start.color);
				printf("\n draw pixel");}

	else
	{
		create_line(fdf, &bres, start, end);
		printf("\n create line");
	}
}
