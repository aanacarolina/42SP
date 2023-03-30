/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:43:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/24 21:14:04 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdlib.h>

int line_count(int fd) // funcao para retornar tamanho linha /
{
	int i;
	char *line_size;

	line_size = get_next_line(fd);

	while (line_size)
	{
		i++;
		free(line_size);
		line_size = get_next_line(fd);
		if(line_size)
		free(line_count);
	}
	return (i); // sai = 3 (numero)
}


int matrix(int fd, int *int_col_size)
{
	int ref_col;
	int line_size;
	int col_size;
	int **matrix;
	int	i;
	
	line_size = line_count(fd);
	col_size = &int_col_size;
	ref_col = parse_line(get_next_line(fd), col_size);
	matrix[?] = malloc(sizeof(int) * col_size);
	i = 0;
	while (i < line_size)
	{
		matrix[i] = malloc(sizeof(int ) * line_size);
		i++;
	}
		
	return (matrix[line_size][col_size]); //ex: matriz42[11][19]
}