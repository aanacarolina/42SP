/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:33:29 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 00:55:00 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRESENHAM_H
# define BRESENHAM_H

#include "../include/fdf.h"

#define FALSE 0
#define TRUE 1


void	bresenham (t_fdf *fdf, t_point start, t_point end);

typedef struct s_bres
{
	int	deltax;
	int	deltay;
	int	signalx;
	int	signaly;
	int	interchange;
	int	error;
}	t_bres;

#endif