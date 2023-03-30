/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:51:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/29 22:43:58 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
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
	ft_counter(&fdf.map, argv[1]);
	return (0);
}
