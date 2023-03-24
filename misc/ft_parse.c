#include <stdio.h>
#include <stdlib.h>


void papel_higienico_transformador (int *bunda)
{
	bunda[0];
	printf("%i CADE A BUNDA:\n", *bunda);
	(void)bunda;
}

int main (void)
{
	int i = 0;
	papel_higienico_transformador(&i); //deref 
	printf("Bunda Size: %i\n", i);
	int matriz_inteiros[5] = {0, 0, 10, 10, 0};

	
    size_t matrix_size = sizeof(matriz_inteiros) / sizeof(matriz_inteiros[0]);
    int line_size = 0;


	int *malloqueiro = malloc(matrix_size * sizeof(int));
    printf("Tamanho matriz inteiros: %lu \n", sizeof(matriz_inteiros));
    printf("Tamanho matriz : %zu \n", matrix_size);
	printf("%lu", sizeof(malloqueiro));
	return (0);
	//return (printf("%lu", matrix_size));
	

}


