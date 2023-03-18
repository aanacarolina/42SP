#include <stdio.h>
#include <stdlib.h>

int	matrix(int fd)
{
	int		i;
	int		j;
	char	*line;//cada uma das linhas / ja é lista de inteiros (o segundo ponteiro) 
	char	*new_matrix[0][0];
	int		int_line_size; //tamanho da linha = colunas 

	i = 0;
	while (i < int_line_size)
	{
		new_matrix[i][j] += line[i];
		i++;
	}

	(printf("%s", **new_matrix));
    return (0);
}