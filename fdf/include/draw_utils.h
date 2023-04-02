/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:45:42 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 00:29:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_UTILS_H
# define DRAW_UTILS_H

# include "fdf.h"

int		draw_pixel(t_fdf *fdf, double x, double y, int color);
void	draw_col(t_fdf *fdf);
void	draw_row(t_fdf *fdf);



#endif