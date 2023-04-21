/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:20:34 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/05 23:49:52 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "fdf.h"

void	free_split(char **split);
int		atoi_hexa(char *hexa);
void	fill_fdf_struct(t_fdf *fdf);
void	exit_special(t_fdf *fdf, char *msg);
int		scale_factor(t_fdf *fdf);

#endif