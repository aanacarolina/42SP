/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:47 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/18 19:53:19 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	matrix(int fd)
{
	int		i;
	int		j;
	int		*line;
	char	**new_matrix[0][0];
	int		int_line_size; 

	line = parse_line(get_next_line(fd), &int_line_size); 

	i = 0;
	while (i < int_line_size)
	{
		
	}
	

    
    i = 0;
	j = 0;
	while (i < line)
	{
		new_matrix[i][j] += line[j];
		j++;
	}
	

  return (new_matrix)
}

while (x < xlen)
    ...
    while (y < ylen)
        ...
        y++
    x++
	
       *  *
matrix[0][0]

matriz vazia [] primeiro ponteiro
   line = parse-line(GNL (fd)) chamar está vindo da parse_line cada uma das linhas (o segundo ponteiro)
   
    matriz_vazia += line
*[
    
0105++[0++  *0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0]
*0125[10  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0]
[0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0]
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