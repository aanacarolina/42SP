/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:51:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/30 20:27:44 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../include/utils.h"
#include "../include/parse_map_utils.h"
#include "../libs/libft/libft.h"
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
	
	printf("%d\n", fdf.map.row_size);
	printf("%d\n", fdf.map.col_size);
	return (0);
}
