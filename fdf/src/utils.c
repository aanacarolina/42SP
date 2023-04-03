/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:19:19 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/02 22:20:49 by anacaro3         ###   ########.fr       */
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

int	atoi_hexa(char *hex)
{
	long 	decimal;
	long	base;
	int		i;
	int		length;

	decimal = 0;
	base = 1;
	length = ft_strlen(hex);
	i =  length--;
	while (i >= 2)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			decimal += (hex[i] - 48) * base;
			base *= 16;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			decimal += (hex[i] - 55) * base;
			base *= 16;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			decimal += (hex[i] - 87) * base;
			base *= 16;
		}
		i--;
	}
	return (decimal);
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
