/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:47 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/23 23:39:08 by anacaro3         ###   ########.fr       */
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

char matrix(int fd, int x, int y)
{
	int i;
	int j;
	int **new_matrix;
	int col; // contagem da coluna,= quantidade de linhas
	int line;

	line = line_count(fd);
	//matrix [line][col]
	
	**new_matrix = malloc(sizeof(int *) * line); // alocando memoria apenas pra [line][col]

	int col = parse_line(get_next_line(fd), &col); // interando cada uma das linhas /row (o segundo ponteiro)
		i = 0;
		while (i < col)
		{
			line = malloc(sizeof(int) * row);
			new_matrix[j][i] = row[i]; // vla - variable lenght array
			i++;
		}
		j++;
		line = i;
	}
	return (new_matrix); // matrix[7][]
}

int main(int argc, char **argv)
{
	printf("%", matrix(argv[1]));
	return (0);
}
/*/
J constantematrix[7][10] matrix[7][10]
x move
qdo i = /0
j++


while (x < xlen)
	...
	while (y < ylen)
		...
		y++
	x++

	   *  *


matriz vazia [] primeiro ponteiro
   row = parse-row(GNL (fd)) chamar está vindo da parse_line cada uma das linhas (o segundo ponteiro)

	matriz_vazia += row
*[

0105++[0++  *0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0]
*0125[10  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0]
[0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0] matrix [0][1]
[0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0]
[0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0]
[0  0 10 10 10 10 10 10  0  0  0  0 10 10 10 10  0  0  0]
[0  0  0 10 10 10 10 10  0  0  0 10 10  0  0  0  0  0  0]
[0  0  0  0  0  0 10 10  0  0  0 10 10  0  0  0  0  0  0]
[0  0  0  0  0  0 10 10  0  0  0 10 10 10 10 10 10  0  0]
[0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0]
[0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0]

]


x = 0;
y = 0;
matrix[0]{0, 0, 10, 10, 0, 0, 10, 10, 0, 0, 0, 10, 10, 10, 10, 10, 0, 0, 0} //
** matrix

** matrix[10][7]
** matrix[10][7]
while (x < xlen)
	...
	while (y < ylen)
		...
		y++
	x++
// a [x=0 y=0 z=0]
// j [x=3 y=2 z=10]

// condicao de parada = tamanho da linha (x)
// malloc = linha x line

//void    ft_matrix(char *file_name)
int row, line;

line[0][1]["[7891]"]
line[1][0]"66666"

line_size[0] = atoi(line[0] = "768")
line_size[768, ]
0
145

char 1 letra um bit / int 1 numero 8 bits
[768, 0, 145]
768

*/