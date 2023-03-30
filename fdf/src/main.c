/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:51:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/29 21:38:18 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../libs/libft/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>



int main(int argc, char **argv)
{
	int fdf_file;
	t_fdf fdf;

	if (argc != 2)
	{
		ft_putstr_fd("Wrong number of arguments. Bye!\n", 2);
		exit(1);
	}
	fdf_file = open(argv[1], O_RDONLY);
	if (fdf_file < 0)
	{
		perror("Failed to open file");
		exit(1);
	}
	return (0);
}