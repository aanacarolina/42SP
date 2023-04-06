/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:51:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/06 20:08:09 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../include/utils.h"
#include "../include/parse_map_utils.h"
#include "../include/bresenham.h"
#include "../include/create_map.h"
#include "../include/draw_utils.h"
#include "../include/window.h"
#include "../libs/libft/libft.h"
#include <mlx.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_fdf	fdf;

	if (argc != 2)
	{
		ft_putstr_fd("Wrong number of arguments. Bye!\n", 2);
		exit(1);
	}
	fill_fdf_struct(&fdf);
	ft_counter(&fdf.map, argv[1]);
	create_map(&fdf, argv[1]);
	init_and_new_win(&fdf);
	draw_map(&fdf, 1);
	mlx_loop(fdf.mlx.mlx_ptr);
	exit_special(&fdf, NULL);
	return (0);
}
