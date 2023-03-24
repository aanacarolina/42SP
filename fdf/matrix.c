/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:43:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/24 00:04:07 by anacaro3         ###   ########.fr       */
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


int col_count(int fd, int *int_col_size) // funcao para retornar qtdade colunas  = quantidade elementos na linha /
{

	char *col_size;

	col_size = parse_line(get_next_line(fd), &col_size);

	while (col_size)
	{
		i++;
		free(col_size);
		col_size = get_next_line(fd);
		if(col_size)
		free(line_count);
	}
	return (i); // sai = 3 (numero)
}


int matrix(int fd, int *int_col_size)
{
	int line;
	int col;
	int **matrix;
	
	line = line_count(fd);
	col = int_col_size[0];

	return (matrix[line][col]);
}