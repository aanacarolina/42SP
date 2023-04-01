/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:51:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/31 22:29:22 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../include/utils.h"
#include "../include/parse_map_utils.h"
#include "../include/create_map.h"
#include "../include/window.h"
#include "../libs/libft/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/*
void print_map(t_map *map)
{
	t_point *tmp;

	for(int r = 0; r < map->row_size; r++)
	{
		for(int c = 0; c < map->col_size; c++)
		{
			tmp = map->points + ((map->row_size * r)+ c); 
			printf("(x=% .2lf, y=% .2lf, z=% .2lf, %d)", tmp->x, tmp->y, tmp->z, tmp->color);
			if(c == (map->col_size -1))
				printf("\n");
		}
	}
}
*/

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




	exit_special(&fdf, NULL);
	return (0);
}
