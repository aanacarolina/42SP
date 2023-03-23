/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:47 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/23 00:01:50 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdlib.h>

int col_count (int fd) //funcao para retornar tamanho coluna / 
{
    int i;
    char col_size;

    col_size = get_next_line(fd); 
    
    while (col_size) 
    {
        i++;  
        col_size = get_next_line(fd); 
    }  
    return (i); //3
}


char matrix(int fd)
{
    int i;
    int j;
    int *line;
    char **new_matrix[0][0];
    int int_line_size; // quantidade de elementos da linha,= tamanho da coluna
    int col;

    col = col_count(fd);
    new_matrix = malloc(size)
    while (j < col)
    {
        line = parse_line(get_next_line(fd), &int_line_size); // cada uma das linhas (o segundo ponteiro)
        i = 0;
        while (i < int_line_size)
        {
            new_matrix[j][i] = line[i]; //vla - variable lenght array
            i++;
        }
        j++;
        col = i;
    }
    return (new_matrix); // matrix[7][10]
}

int main (int argc, char **argv)
{
    printf("%" , matrix(argv[1]));
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
   line = parse-line(GNL (fd)) chamar está vindo da parse_line cada uma das linhas (o segundo ponteiro)

    matriz_vazia += line
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
// malloc = linha x col

//void    ft_matrix(char *file_name)
int line, col;

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