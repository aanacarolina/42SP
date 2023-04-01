/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:19:19 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/31 22:54:14 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.h"
#include "../include/fdf.h"
#include "../libs/libft/libft.h"
#include "../libs/minilibx/mlx.h"
#include <stdlib.h>

void	free_split(char **split)
{
	int	count;

	count = 0;
	while (split[count] != NULL)
	{
		free(split[count]);
		count++;
	}
	free(split);
}

int	atoi_hexa(char *hexa)
{
	hexa = NULL;
	return (1);
}


void	fill_fdf_struct(t_fdf *fdf)
{
	fdf->map.col_size = 1;
	fdf->map.row_size = 1;
	fdf->map.points_size = 0;
	fdf->map.points = NULL;
	fdf->mlx.mlx_ptr = NULL;
	fdf->mlx.win_ptr = NULL;
	fdf->mlx.w_height = HEIGHT;
	fdf->mlx.w_width = WIDTH;
	fdf->mlx.img = NULL;
	fdf->mlx.address = NULL;
}

void	exit_special(t_fdf *fdf, char *msg)
{
	if (fdf->map.points != NULL)
		free(fdf->map.points);
	if (fdf->mlx.img != NULL)
		mlx_destroy_image(fdf->mlx.mlx_ptr, fdf->mlx.img);
	if (fdf->mlx.win_ptr != NULL)
		mlx_destroy_window(fdf->mlx.mlx_ptr, fdf->mlx.win_ptr);
	if (fdf->mlx.mlx_ptr != NULL)
		mlx_destroy_display(fdf->mlx.mlx_ptr);
	if (msg != NULL)
		ft_putstr_fd(msg, 2);
	if (fdf->mlx.mlx_ptr != NULL)
	{
		mlx_loop_end(fdf->mlx.mlx_ptr);
		free(fdf->mlx.mlx_ptr);
	}
	exit(1);
}
