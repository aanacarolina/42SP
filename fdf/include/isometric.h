/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:40:25 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 00:43:50 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISOMETRIC_H
# define ISOMETRIC_H

void	x_rotation(t_point *point, int size, double ang);
void	y_rotation(t_point *point, int size, double ang);
void	z_rotation(t_point *point, int size, double ang);
void	scale(t_point *point, int size, int scale);
void	translation(t_point *point, int size, int x, int y);


#endif